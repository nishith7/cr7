class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int minBox = 0;
        int sum = 0;
        sort(capacity.begin(), capacity.end(), greater<>());
        for(int i = 0;i<apple.size();i++){
            sum+=apple[i];
        }

        for(int i=0;i<capacity.size();i++){
            if(sum>0){
            sum=sum-capacity[i];
    minBox++;
            }else{
                break;
            }
        
        }
        return minBox;
        
    }
};