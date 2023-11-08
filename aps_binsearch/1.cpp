#include <iostream>
using namespace std;
int main(){
    int right,left,size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    left=0,right=size-1;
    int sereja=0,dima=0;
    int i=0;
    while(left<right){
        if(arr[right]>arr[left]){
            
            if(i%2==0){
                sereja+=arr[right];
            }
            else{
                dima+=arr[right];
            }
            right-=1;
        }
        else if(arr[right]<arr[left]){
            if(i%2==0){
                sereja+=arr[left];
            }
            else{
                dima+=arr[left];
            }
            left+=1;
        }
        i++;
    }
    if(left==right){
        if(i%2==0){
            sereja+=arr[left];
        }
        else{
            dima+=arr[left];
        }
    }
    cout<<sereja<<" "<<dima;
    return 0;
}