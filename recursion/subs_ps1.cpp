#include <iostream>
#include <vector>
using namespace std;
void printSub(int arr[],int target,int size,int index,vector <int> &subarr,int sum){
    if(index==size){
        if(sum==target){
            for(auto it:subarr){
                cout<<it<<" ";
            }
            cout<<endl;
            return;
        }
        
    }
    subarr.push_back(arr[index]);
    sum+=arr[index];
    printSub(arr,target,size,index+1,subarr,sum);
        
    subarr.pop_back();
    sum-=arr[index];
    printSub(arr,target,size,index+1,subarr,sum);
        
    
}