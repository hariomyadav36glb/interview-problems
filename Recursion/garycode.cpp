
class Solution {
  public:
    string to_binary(int n)
    {
        string ans = "";
        while(n)
        {
            int rem = n%2;
            ans += to_string(rem);
            n/=2;
        }
        reverse(ans.begin(),ans.end()) ;
        return ans;
    }
    vector<string> graycode(int n) {
        
        if(n==1)
        {
            vector<string>base;
            base.push_back("0");
            base.push_back("1");
            return base;
        }
        
        vector<string>faith = graycode(n-1);
        vector<string>res ;
        for(auto it : faith)
        {
            res.push_back('0' + it);
        }
        for(int i = faith.size()-1 ;i >= 0 ;i--)
        {
            string st = faith[i];
            res.push_back('1' +  st);
        }
        return res;
        
    }
};