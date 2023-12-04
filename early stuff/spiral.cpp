#include <iostream>
using namespace std;
long long int mod(long long int a,long long int b){
    if(a>b){
        return a-b;

    }
    return b-a;
}
int main(){
   long long  int row,col;
   long long int testcase;
   cin>>testcase;
   for(int i=0;i<testcase;i++){
    cin>>row>>col;
   long long int size=max(row-1,col-1);
    if((size&1)==0){
        cout<<size*size + 1 + mod(row-1,size) + mod(0,col-1)<<endl;
    }
    else{
        cout<<size*size +1+mod(0,size)+mod(size,col-1)<<endl;
    }}
    return 0;
}