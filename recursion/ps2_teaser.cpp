#include <iostream>
using namespace std;
void dice(int target,int sum,int* count){
    if(sum==target && (target>0)){
        (*count)++;
        return;
    }
    else if(sum>target){
        return;
    }
    
        
        for(int i=1;i<6;i++){
            dice(target,sum+i,count);
           
        }
        
}
int main(){
int target;
cin>>target;
int count=0;
dice(target,0,&count);
cout<<count;
return 0;
}