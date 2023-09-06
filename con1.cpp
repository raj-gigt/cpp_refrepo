#include <iostream>
using namespace std;
int main(){
    string l1="",l2="",l3="",l4="",str="";
    cin>>l1>>l2>>l3>>l4;
    str=l1+l2+l3+l4;
    for(int i=0;i<11;i++){
        if(i==3 ||i==7){
            continue;
        }
        if((str[i]==str[i+1] && str[i]==str[i+4]) || (str[i]==str[i+1] && str[i]==str[i+5]) || (str[i]==str[i+4] && str[i]==str[i+5]) || (str[i+1]==str[i+4] && str[i+1]==str[i+5])){
            
            cout<<"YES";
            exit(0);
        }
        
    }
    cout<<"NO";
    return 0;
}