#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int CASE=1;CASE<=T;CASE++)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;
        int k = N/2 + N%2;
        int ans = 0;
        int i=0;
        for(;i<k;i++)
        {
            ans = ans + s[i] - '0';
        }
        int j = 0;
        int prev = ans;
        while(i<N)
        {
            prev  = prev + (s[i] - '0') - (s[j] - '0');
            ans = max(ans, prev);
            i++;
            j++;
        }
        cout<<"Case #"<<CASE<<": "<<ans<<'\n';
    }
    return 0;
}