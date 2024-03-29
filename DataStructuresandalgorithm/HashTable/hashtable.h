
template<typename T>
class Node{
    public:
    string key;
    T value;
    Node *next;

    Node(string key,T value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
};

class Hashtable{
    Node<T> ** table;
    int cs;  //total entries so far
    int ts;  //size of table

    int hashFn(string key){
        int idx = 0;
        int power = 1;
        for(auto ch:key){
            idx = (idx + ch*power)%ts;
            power = (power*29)%ts;

        }
        return idx;

    }
    

    public:
    Hashtable(int default_size = 7){
        cs = 0;
        ts = default_size;
        table = new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i] = NULL;
        }
    }

void insert(string key,T val){
    //Next 
    int idx = hashFn(key);
    Node<T> * n = new Node<T>(key,val);

    //insertion at the head of the linked list
    n->next = table[idx];
    table[idx] = n;
    


}


};