long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long ans=INT_MAX;
    long long i=0;
    long long j=i+m-1;
    while(j<n){
        ans=min(ans,a[j]-a[i]);
        i++;
        j=i+m-1;
    }
    return ans;
    
    }   
