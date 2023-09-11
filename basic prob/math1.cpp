#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x,y,z;
    for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        
        if(x==y && z<=x){
            
            cout<<"YES"<<endl;
            cout<<z<<" "<<x<<" "<<z<<endl;
            continue;
        }
        if(x==z && y<=x){
            
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<y<<endl;
            continue;
        }
        if(y==z && x<=y){
            
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<y<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}