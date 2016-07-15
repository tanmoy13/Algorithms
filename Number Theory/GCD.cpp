#include <iostream>

using namespace std;

template<class T>

T gcd(T a, T b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
