#include <iostream>

using namespace std;
typedef long long ll;
#define mod 998244353;
ll BinExponentiation(ll a, ll b)
{
    ll result=1;
    ll a_pwr=a%mod;
    while(b)
    {
        if(b%2==1) result*=a_pwr;
        a_pwr*=a_pwr;
        a_pwr%=mod; // Take modulo everywhere
        result%=mod;
        b/=2;
    }
    return result;
}
int main(){
    int w,h;
    cin>>w>>h;
    cout<<BinExponentiation(2,h+w);
}