#include <iostream>
#include <vector>
using namespace std;
vector <int> equal(vector <int>arr,int begin,int end){
    vector <int> arr_2;
    for(int i=begin;i<=end;i++){
        arr_2.push_back(arr[i]);
    }
    return arr_2;
}
void printarr(vector <int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(vector <int> &arr,int n){
    vector<int>arr_L;
    vector<int>arr_R;
    if(n!=1){
        if(n%2==1){
            arr_L=equal(arr,0,(n-1)/2);
            arr_R=equal(arr,(n+1)/2,n-1);
            
            
            merge(arr_L,(n+1)/2);
            
            merge(arr_R,(n-1)/2);
        }
        else{
            arr_L=equal(arr,0,(n/2)-1);
            arr_R=equal(arr,n/2,n-1);
            
            merge(arr_L,n/2);
            merge(arr_R,n/2);
        }}
    else{
        return;
     }   
        int left=0,right=0;
        for(int i=0;i<n;i++){
           if(left<arr_L.size() && right<arr_R.size()){ 
            if(arr_L[left]<arr_R[right]){
                arr[i]=arr_L[left];
                left++;
            }
            else{
                arr[i]=arr_R[right];
                right++;
            }}
           else{
                if(left==arr_L.size()){
                    arr[i]=arr_R[right];
                    right++;
                }
                else{
                    arr[i]=arr_L[left];
                    left++;
                }
           } 
        }
        
    }
int main(){
    int arr[10]={2,4,5,6,1,14,35,17,9,10};
    vector <int> ans; 
    for(int i=0;i<10;i++){
        ans.push_back(arr[i]);
    }
    merge(ans,ans.size());
    for(int i=0;i<10;i++){
        cout<<ans[i]<<" ";
    }
}