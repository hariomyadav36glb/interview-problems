
class Solution {
  public:
    void fun(Node* root , int dg , map<int,int>&mp)
    {
        if(!root) return ;
        
        mp[dg] += root->data;
        fun(root->right , dg ,mp);
        fun(root->left ,dg+1 ,mp);
        
    }
    vector<int> diagonalSum(Node* root) {
        map<int,int>mp;
        fun(root,0,mp);
        vector<int>ans;
        for(auto it :mp) ans.push_back(it.second);
        return ans;
    }
};