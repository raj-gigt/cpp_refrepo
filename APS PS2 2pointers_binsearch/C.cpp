#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    int size;
    int count;
    int left,right;
    for(int i=0;i<testcase;i++){
        cin>>size;
        int plan[size],budget[size];
        for(int i=0;i<size;i++){
            cin>>plan[i];
        }
        for(int i=0;i<size;i++){
            cin>>budget[i];
            budget[i]-=plan[i];
        }
        sort(budget,budget+size);
        count=0;
        left=0,right=size-1;
        while(left<right){
        if(budget[left]+budget[right]<0){
            left+=1;
        }
        else{
            left++,right--,count++;
        }}
        cout<<count<<endl;
    }
}

