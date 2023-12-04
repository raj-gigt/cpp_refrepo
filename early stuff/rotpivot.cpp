#include <iostream>
using namespace std;
int rotpivot(int array[], int size){
    int start=0,end=size-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(array[mid]<array[start]){
            end=mid;
            continue;
        }
        if(array[mid]>array[start]){
            if(array[mid+1]<array[mid]){
                return mid;
            }
            start=mid;
        }
    }
    return -1;
}
int search(int array[],int target,int start,int end){
    int mid;
    if(start==-1||end==-1){
        return -1;
    }
    while(start<=end){
        mid=start+(end-start)/2;
        if(target<array[mid]){
            end=mid-1;
            continue;
        }
        if(target>array[mid]){
            start=mid+1;
            continue;
        }
        if(target==array[mid]){
            return mid;
        }
    }
    return -1;
}
int rotsearch(int array[],int target,int size){
    int pivot=rotpivot(array,size);
    int left=search(array,target,0,pivot);
    if(left==-1){
        int right=search(array,target,pivot,size-1);
        return right;
    }
    return left;
}
int main(){
    int arr[9]={35,36,37,51,52,53,0,1,2};
    cout<<"pivot index is"<<endl<<rotsearch(arr,3,9);
}