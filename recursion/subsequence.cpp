#include <iostream>
#include <vector>
using namespace std;
bool printSub(int arr[],int target,int size,int index,vector <int> &subarr,int sum){
    if(index==size){
        if(sum==target){
            for(auto it:subarr){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        else{
            return false;
        }
    }
    subarr.push_back(arr[index]);
    sum+=arr[index];
    if(printSub(arr,target,size,index+1,subarr,sum)==true){
        return true;
    }
    subarr.pop_back();
    sum-=arr[index];
    if(printSub(arr,target,size,index+1,subarr,sum)==true){
        return true;
    }
    return false;
}