#include <iostream>
using namespace std;
int mountarr(int arr[],int size){
    int n = size;
    int start=0,end=n-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        if(arr[mid+1]>arr[mid]){
            start=mid+1;
            continue;
        }
        else{
            end=mid-1;
            continue;
        }
    }
    return -1;
}
int main(){
    int test[7]={1,27,25,15,14,12,10};
    cout<<"Peak index is-"<<endl<<mountarr(test,7);
}