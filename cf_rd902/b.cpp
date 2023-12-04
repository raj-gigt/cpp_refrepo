#include <iostream>

using namespace std;
int int_frombin(char arr[],int size){
    int base=1;
    int result=0;
    for(int i=0;i<size;i++){
        if(arr[i]=='1'){
            result+=base;
        }
        base*=2;
    }
    return result;
}
int main(){
    int testcase;
    cin>>testcase;
    int size;

    for(int i=0;i<testcase;i++){
        cin>>size;
        char str[size];
        for(int i=0;i<size;i++){
            cin>>str[size-1-i];
        }
        

    }
}