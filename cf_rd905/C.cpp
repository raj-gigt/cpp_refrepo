#include <iostream>
using namespace std;
bool search(int arr[],int target,int left,int right){
    for(int i=left;i<=right;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int testcase;
    cin>>testcase;
    int size;
    int count;
    for(int i=0;i<testcase;i++){
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        count=0;
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                if(!search(arr,arr[i],0,i-1) && !search(arr,arr[j],j+1,size-1)){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}