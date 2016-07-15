#include <iostream>

using namespace std;

#define ll long long

ll bigmod(ll n, ll pow, ll mod)
{
    if(pow==0) return 1;

    ll ret=bigmod(n,pow/2,mod)%mod;
    ret=(ret*ret)%mod;
    if(pow%2==1)
        ret=(ret*n)%mod;
    return ret;
}

int main()
{

    long long a,b,MOD;

    MOD = 1e9+7;
    cin>>a>>b;
    cout<<bigmod(a,b,MOD);


    return 0;
}
