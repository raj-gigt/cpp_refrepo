#include <iostream>
#include <algorithm>
using namespace std;
int and_subset(int arr[],int j,int size){
    int and_sum=(1<<30)-1;
    for(int i=0;i<size;i++){
        if(((1<<i)&j)==1){
            and_sum&=arr[i];
        }
    }
    // cout<<"This is and sum"<<and_sum<<endl;
    return and_sum;
}
void update_arr(int arr[],int j,int and_sum,int size){
    for(int i=0;i<size;i++){
        if(((1<<i)&j)==1){
            arr[i]-=and_sum;
        }
    }
    // cout<<and_sum<<endl;
}
bool arr_zero(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}
// void print_arr(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
bool eliminate(int k,int size,int arr[]){
    int temp[size];
    for(int j=0;j<(1<<size);j++){
        if(__builtin_popcount(j)==k){
        for(int i=0;i<size;i++){
        temp[i]=arr[i];
    }
    for(int l=0;l<(1<<size);l++){
        if(__builtin_popcount(l)==k){
            while(and_subset(temp,l,size)!=0){
                
                update_arr(temp,l,and_subset(temp,l,size),size);
                // print_arr(temp,size);
                break;
            }
        }
    }
    if(arr_zero(temp,size)){
        return true;
    }
        }
    }
    return false;
}
int main(){
    int testcase,size;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
            
        }
        cout<<1<<" ";
        for(int k=2;k<=size;k++){
            if(eliminate(k,size,arr)){
                cout<<k<<" ";
            }
            
        }
        
        cout<<endl;
    }
    return 0;
}