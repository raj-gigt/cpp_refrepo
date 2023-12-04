#include<iostream>
using namespace std;
int expo(int num,int pow){
    if(pow<1){
        return 1;
    }
    return num*expo(num,pow-1);
}
int main(){
    int a,n;
    cout<<"enter exp no and times"<<endl;
    cin>>a>>n;
    cout<<"your answer is"<<expo(a,n)<<endl;
    return 0;
}