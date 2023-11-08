#include <iostream>
using namespace std;
typedef long long ll;
#define mod 1000000007
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
    ll a,b;
    cin>>a>>b;
    cout<<BinExponentiation(a,b);
    
}