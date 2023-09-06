#include <iostream>
using namespace std;
int ceiling(int arr[],int target,int n){
    int low=0,high=n-1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}
int main(){
    int arr[5]={1,3,6,14,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    cout<<"ceiling is "<<ceiling(arr,target,n);
    return 0;
}