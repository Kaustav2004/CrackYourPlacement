class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i=0;
        int j=cardPoints.size()-1;
        int ans=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        ans=sum;
        i=k-1;
        while(j>=0 && i>=0){
            sum+=(cardPoints[j]-cardPoints[i]);
            i--;
            j--;
            if(i+cardPoints.size()-j<=k){
                ans=max(sum,ans);
            }
            else break;
            
        }
        return ans;
    }
};
