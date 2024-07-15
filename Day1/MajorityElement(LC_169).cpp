class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele=-1;
        for(auto i:nums){
            if(count==0){
                ele=i;
                count++;
            }
            else if(ele==i){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};
