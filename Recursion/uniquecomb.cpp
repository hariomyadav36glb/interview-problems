class Solution {
  public:
    
    void fun(int n ,int prev , vector<int>t , vector<vector<int>> &ans)
    {
        if(n==0)
        {
            ans.push_back(t);
            return ;
        }
        
        for(int  i= min(n,prev); i >= 1 ;i--)
        {
            t.push_back(i);
            fun(n-i , i , t , ans);
            t.pop_back();
        }
    }
  
    vector<vector<int>> UniquePartitions(int n) {
        vector<vector<int>> ans;
        fun(n ,n, {} , ans);
        return ans;
    }
};