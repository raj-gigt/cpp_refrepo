#include <iostream>
using namespace std;
int max(int arr[],int i,int n){
    for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        return arr[i];
}
int main(){
    int arr[7]={1,0,67,32,24,39,12};
    int target;
    cin>>target;
    cout<<"max element is"<<endl<<max(arr,target,7);
}