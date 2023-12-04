#include <iostream>
using namespace std;
int sum_dig(int num){
   int sum=0;
    while(num>=1){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main(){
    int testcase;
    cin>>testcase;
    int x,k;
    int modx;
    for(int i=0;i<testcase;i++){
        cin>>x>>k;
        while(sum_dig(x)%k!=0){
            x++;
        }
        cout<<x<<endl;
    }
}