#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll a, ll b)
{
    ll ans = 1;
    if(a == 0)
    {
        return 0;
    }
    while(b>0)
    {
        if(b&1)
        {
            ans = (ans*a)%1000000007;
        }
        b = b >> 1;
        a = (a*a)%1000000007;
    }
    return ans%1000000007;
}
int main()
{
    int T;
    cin >> T;
    for(int CASE=1;CASE<=T;CASE++)
    {
        ll N, K, x1, y1, C, D, E1, E2, F;
        cin >> N;
        cin >> K;
        cin >> x1;
        cin >> y1;
        cin >> C;
        cin >> D;
        cin >> E1;
        cin >> E2;
        cin >> F;
        vector<ll> A(N);
        A[0] = (x1+y1)%F;
        A[0] = (A[0]*N)%1000000007;
        ll x_prev = x1;
        ll y_prev = y1;
        for(ll i=1;i<N;i++)
        {
            ll x_new = (C*x_prev + D*y_prev + E1)%F;
            ll y_new = (C*y_prev + D*x_prev + E2)%F;
            A[i] = (x_new+y_new)%F;
            A[i] = (A[i]*(N-i))%1000000007;
            x_prev = x_new;
            y_prev = y_new;
        }
        ll ans = (A[0]*K)%1000000007;
        ll temp = K;
        for(ll i=1;i<N;i++)
        {
            ll x = ( (i+1) * (((power(i+1, K) - 1) * power(i, 1000000005))%1000000007))%1000000007;
            temp = (temp+x)%1000000007;
            ans = (ans+(temp*A[i])%1000000007)%1000000007;
        }
        cout<<"Case #"<<CASE<<": "<<ans<<'\n';
    }
    return 0;
}