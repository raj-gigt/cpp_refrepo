#include <iostream>
using namespace std;
int findprob(int n, int k){
    int timeleft=240-k;
    int start=1,end=n;
    while(start<=end){
        int i=start+(end-start)/2;
        
        if(5*i*(i+1)/2<timeleft){
            if(5*(i+1)*(i+2)/2>timeleft){
                return i;
            }
            if(start==end){
            return i;   
            }
            start=i+1;
            continue;
        }
        if(5*i*(i+1)/2>timeleft){
            if(5*(i-1)*(i)/2<=timeleft){
                return i-1;
            }
            if(start==end){
            return i;   
            }
            end=i-1;
            continue;
        }
        
        else{
            return i;
        }
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int ans=findprob(n,k);
    cout<<ans;
    return 0;
}