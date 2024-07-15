class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[j]==0) j++;
            else if(nums[i]!=0) i++;
            else if(nums[i]==0){
                if(i<j){
                    swap(nums[i],nums[j]);
                    j++;
                    i++;
                }
                else{
                    j++;
                } 
            }
        }
    }
};
