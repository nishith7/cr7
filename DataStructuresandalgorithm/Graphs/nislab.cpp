#include <bits/stdc++.h>
using namespace std;
int euclidean(int a, int n)
{
    int r1, r2;
    if (n < a)
    {
        r2 = a % n;
    }
    else
    {
        r2 = a;
    }
    r1 = n;

    int t1 = 0;
    int t2 = 1;
    int q, r, t;
    while (r2 > 0)
    {
        q = r1 / r2;
        r = r1 - (q * r2);
        r1 = r2;
        r2 = r;
        t = t1 - (q * t2);
        t1 = t2;
        t2 = t;
    }
    int result;
    if (r1 == 1)
    {
        result = t1;
        if (result < 0)
        {
            result += (abs(result) / n) * n;
            result += n;
        }
    }
    else
    {
        cout << "Multiplicative inverse is not possible.";
        exit(0);
    }
    return result;
}
string convertToBinary(int number)
{
    string binary;
    while (number != 0)
    {
        binary += to_string(number % 2);
        number /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}
long long int squareAndMultiply(int a, int b, int n)
{
    string b_binary = convertToBinary(b);
    long long int Z = 1;
    for (int i = 0; i < b_binary.length(); i++)
    {
        Z = (Z * Z) % n;
        if (b_binary[i] == '1')
        {
            Z = (Z * a) % n;
        }
    }
    return Z;
}
void pointGeneration(vector<pair<int, int>> &valid_points,
                     int a, int b, int p)
{
    int x = 0;
    while (x < p)
    {
        int w = (squareAndMultiply(x, 3, p) + (a * x) + b) % p;
        if (w == 0 || squareAndMultiply(w, (p - 1) / 2, p) == 1)
        {
            int sqrt_w = sqrt(w);
            if (sqrt_w * sqrt_w != w)
            {
                int k = 1;
                while (w + (k * p) <= p * p)
                {
                    sqrt_w = sqrt(w + (k * p));
                    if (sqrt_w * sqrt_w == w + (k * p))
                    {
                        break;
                    }
                    k++;
                }
            }
            int sqrt_w_p = sqrt_w % p;
            valid_points.push_back(make_pair(x,
                                             sqrt_w_p));
            if (sqrt_w_p != 0)
            {
                sqrt_w_p *= -1;
                sqrt_w_p += p;
                valid_points.push_back(make_pair(x,
                                                 sqrt_w_p));
            }
        }
        x++;
    }
}
bool isPrime(int n)
{
    if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        int k, m;
        bool is_generated = false;
        int i = 1;
        while (!is_generated)
        {
            if (((n - 1) / int(pow(double(2), double(i)))) % 2 != 0)
            {
                k = i;
                m = (n - 1) / int(pow(double(2),
                                      double(i)));
                is_generated = true;
            }
            i++;
        }
        srand(time(0));
        int a = (rand() % (n - 2 - 2 + 1)) + 2;
        int b = squareAndMultiply(a, m, n);
        if (b % n == 1)
        {
            return true;
        }
        for (int i = 0; i < k; i++)
        {
            if (b % n == -1 + n)
            {
                return true;
            }
            else
            {
                b = (b * b) % n;
            }
        }
    }
    return false;
}
pair<int, int> findSumOfPoints(int p, int a, int b,
                               pair<int, int> point, pair<int, int> sum_of_points, int d)
{
    for (int i = 1; i < d; i++)
    {
        int lamda;
        if (sum_of_points.first == point.first &&
            sum_of_points.second == point.second)
        {
            int num = 2 * point.second;
            while (num < 0)
            {
                num += p;
            }
            lamda = ((((3 * point.first * point.first) +
                       a) %
                      p) *
                     euclidean(num, p)) %
                    p;
        }
        else
        {
            int num = sum_of_points.first - point.first;
            while (num < 0)
            {
                num += p;
            }
            lamda = (((sum_of_points.second -
                       point.second) %
                      p) *
                     euclidean(num, p)) %
                    p;
        }
        sum_of_points.first = ((lamda * lamda) -
                               point.first - sum_of_points.first) %
                              p;
        if (sum_of_points.first < 0)
        {
            sum_of_points.first += p;
        }
        sum_of_points.second = (lamda * (point.first -
                                         sum_of_points.first) -
                                point.second) %
                               p;
        if (sum_of_points.second < 0)
        {
            sum_of_points.second += p;
        }
    }
    return sum_of_points;
}
void keyGeneration(int p, int a, int b, vector<pair<int, int>> valid_points, pair<int, int> &e1, int &d, pair<int, int> &e2)
{
    srand(time(0));
    int e1_index = (rand() % (valid_points.size() - 1 - 0 + 1));
    e1 = valid_points[e1_index];
    d = (rand() % (5 - 1 + 1)) + 1;
    e2 = findSumOfPoints(p, a, b, e1, e1, d);
}
void encryption(pair<int, int> &c1, pair<int, int> &c2,
                pair<int, int> m, pair<int, int> e1, pair<int, int> e2,
                int p, int a, int b)
{
    srand(time(0));
    int r = (rand() % (5 - 1 + 1)) + 1;
    cout << "r: " << r << endl;
    c1 = findSumOfPoints(p, a, b, e1, e1, r);
    c2 = findSumOfPoints(p, a, b, e2, e2, r);
    c2 = findSumOfPoints(p, a, b, c2, m, 2);
}
pair<int, int> decryption(pair<int, int> c1, pair<int, int> c2, int d, int p, int a, int b)
{
    pair<int, int> dec_m;
    dec_m = findSumOfPoints(p, a, b, c1, c1, d);
    dec_m.second *= -1;
    dec_m = findSumOfPoints(p, a, b, dec_m, c2, 2);
    return dec_m;
}
int main()
{
    int p, a, b;
    cout << "Enter the prime number : ";
    cin >> p;
    if (!isPrime(p))
    {
        cout << "Number is not a prime.";
        return 0;
    }
    cout << "Enter the a and b : ";
    cin >> a >> b;
    vector<pair<int, int>> valid_points;
    pointGeneration(valid_points, a, b, p);
    if (valid_points.size() != 0)
    {
        cout << "Generated points" << endl
             << "{";
        for (int i = 0; i < valid_points.size(); i++)
        {
            cout << "(" << valid_points[i].first << ", "
                 << valid_points[i].second << ")";
            if (i != valid_points.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
    else
    {
        cout << "No points are generated.";
        return 0;
    }
    pair<int, int> e1, e2, c1, c2, m, dec_m;
    cout << "Enter m from generated points: ";
    cin >> m.first >> m.second;
    if (find(valid_points.begin(), valid_points.end(), m) == valid_points.end())
    {
        cout << "Please enter the m from generated points.";
        return 0;
    }
    int d;
    keyGeneration(p, a, b, valid_points, e1, d, e2);
    cout << "e1: (" << e1.first << ", " << e1.second << ")" << endl;
    cout << "d: " << d << endl;
    cout << "e2: (" << e2.first << ", " << e2.second << ")" << endl;
    encryption(c1, c2, m, e1, e2, p, a, b);
    cout << "Encrypted c1: (" << c1.first << ", " << c1.second << ")" << endl;
    cout << "Encrypted c2: (" << c2.first << ", " << c2.second << ")" << endl;
    dec_m = decryption(c1, c2, d, p, a, b);
    cout << "Decrypted m: (" << dec_m.first << ", " << dec_m.second << ")" << endl;
    return 0;
}