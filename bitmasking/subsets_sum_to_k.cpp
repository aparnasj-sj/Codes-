vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    // gerenate all subsets
    // check if sum = k
    vector<vector<int>>vv;
    int m=(0|(1<<n))-1;
   // cout<<m<<endl;
    for(int i=0;i<=m;i++){
        vector<int>v;
        int sum=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
              
                sum+=arr[j];
                v.push_back(arr[j]);
                
            }
            
            
        }
        if(sum==k){
          
            vv.push_back(v);
            
        }
        v.clear();
    }
    return vv;
}
