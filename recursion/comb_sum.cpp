#include <iostream>
#include <vector>
using namespace std;
void printarr(vector <int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void com_sum(int arr[],int i,vector <int>&ans,int n,int target,int sum){
    if(sum==target){
        printarr(ans);
        return;
    }
    if(sum>target || i>=n){
        return;
    }
    
    
    ans.push_back(arr[i]);
    com_sum(arr,i,ans,n,target,sum+arr[i]);
    
    ans.push_back(arr[i+1]);
    com_sum(arr,i+1,ans,n,target,sum+arr[i]+arr[i+1]);
    ans.pop_back();
    ans.pop_back();
    ans.push_back(arr[i+1]);
    com_sum(arr,i+1,ans,n,target,sum+arr[i+1]);
    ans.pop_back();
    
}
int main(){
    int arr[6]={2,3,4,5,6,7};
    vector <int> ans;
    for(int i=0;i<6-1;i++){
    com_sum(arr,i,ans,4,7,0);}
    return 0;
}