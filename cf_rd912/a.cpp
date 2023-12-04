#include <iostream>
using namespace std;
bool sort(int arr[],int n){
    for(int i=0;i<n;i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
}
int main(){
    int testcase;
    cin>>testcase;
    int n,k;
    for(int i=0;i<testcase;i++){
        cin>>n>>k;
        int arr[n];
        bool sort=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
        
            if(k>=2){
                cout<<"YES"<<endl;
            }
            else{
                bool sort_arr=sort(arr,n);
                if(){
                    cout<<"YES"<<endl;

                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    return 0;
    }
    
