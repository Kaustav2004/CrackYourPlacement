class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        int prevSum=0;
        int rem;
        mp[0]++;
        for(int i=0;i<nums.size();i++){
            prevSum+=nums[i];
            rem = prevSum%k;
            if(rem<0) rem+=k;
            ans+=mp[rem];
            mp[rem]++;
        }

        return ans;
    }
};
