#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
    bool swap;
    
    for(int i=0;i<n-1;i++){
        swap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
        if(swap==false){
            break;
        }
    }
}
void printarr(int arr[],int n){
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={7,5,32,4,16,53};
    printarr(arr,6);
}