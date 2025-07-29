#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;

    if(n==0) cout<<"0";

    string ans = " ";
    while(n!=0)
    {
        int rem = n % (-2);
        n /= (-2);

        if(rem < 0)
        {
            rem+=2;
            n += 1;
        }
        ans += to_string(rem);
    }
    reverse(ans.begin() ,ans.end());
    cout<<ans;
}