#include <iostream>
using namespace std;
void changeleft(int arr[],int down,int pos){
    for(int i=0;i<=pos;i++){
        arr[i]-=down;
    }
}
void changeRight(int arr[],int down,int pos,int size){
    for(int i=pos;i<size;i++){
        arr[i]-=down;
    }
}
void inc_1(int arr[],int up,int size){
    for(int i=0;i<size;i++){
        arr[i]+=up;
    }
}

int main(){
    int testcase,size;
    cin>>testcase;
    int min;
    for(int i=0;i<testcase;i++){
        cin>>size;
        int arr[size];
        min=0;
        for(int j=0;j<size;j++){
            cin>>arr[j];
            if(j==0){
                min=arr[0];
            }
            if(arr[j]<min){
                min=arr[j];
            }
        }
        if(min>0){

        }
    }
}