#include <iostream>
using namespace std;
# define mod 1000000007
typedef long long ll;
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
ll k_special_num(ll n,ll k){
    ll sum=0;
    for(int i=0;i<31;i++){
        
        if(((k>>i)&1)==1){
            
            sum+=BinExponentiation(n,i);
        }
    }
    return sum%mod;    
}
int main(){
    int testcase;
    cin>>testcase;
    ll n,k;
    for(int i=0;i<testcase;i++){
        cin>>n>>k;
        cout<<k_special_num(n,k)<<endl;
    }
    return 0;
}