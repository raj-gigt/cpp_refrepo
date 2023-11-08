#include <iostream>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define Fact_length 600001

ll Factorial[Fact_length];

// Computes the array factorial
ll Make_Factorial()
{
    Factorial[0]=1;
    for(ll i=1;i<Fact_length;i++)
    {
        Factorial[i]=i*Factorial[i-1];
        Factorial[i]%=mod;
    }
    return 0;
}
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
// ll BinExponentiation2(ll a, ll b)
// {
//     ll result=1;
//     ll a_pwr=a;
//     while(b)
//     {
//         if(b%2==1) result*=a_pwr;
//         a_pwr*=a_pwr;
//          // Take modulo everywhere
       
//         b/=2;
//     }
//     return result;
// }
ll Mod_Inv(ll a)
{
    a%=mod;
    ll x= BinExponentiation(a,mod-2);
    return x;
}
ll nCr(ll n, ll r)
{
    if(n<r) return 0;
    ll ans=Factorial[n];
    ans%=mod;
    ans*=Mod_Inv(Factorial[r]);
    ans%=mod;
    ans*=Mod_Inv(Factorial[n-r]);
    ans%=mod;
    return ans;
}
int main(){
    Make_Factorial();
    int testcase;
    ll n,k,arrays;
    
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        cin>>n>>k;
        if((n&1)==0){
            arrays=((nCr(BinExponentiation(2,k-1),(n/2)))*(Factorial[n]))%mod;
            cout<<arrays<<endl;
        }
        else{
            arrays=((nCr(BinExponentiation(2,k-1)-1,(n-1/2)))*(Factorial[n]))%mod;
            cout<<arrays<<endl;
        }
    }
    // cout<<BinExponentiation2(2,k-1)<<endl;
    // cout<<BinExponentiation(2,k-1)<<endl;
    // cout<<nCr(BinExponentiation2(2,k-1),n/2);
    
    return 0;
}