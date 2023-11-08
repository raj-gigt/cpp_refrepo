#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;
bool sorted(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]!=i){
            return false;
        }
    }
    return true;
}

int least_arrzero(int arr[],int size){
    
    for(int i=1;i<arr[0];i++){
        if(((arr[0]-i)!=arr[size-1])&&((arr[0]-i)!=arr[size-1]+1)){
            return arr[0]-i;
        }
    }
    return 1;
}
int least_arrzero1(int arr[],int size){
    
    for(int i=1;i<arr[0];i++){
        if(((arr[0]-i)!=arr[size-1])&&((arr[0]-i)!=arr[size-1]-1)){
            return arr[0]-i;
        }
    }
    return 1;
}

void swap(int arr[],int pos1,int pos2){
    arr[pos1]=arr[pos1]+arr[pos2];
    arr[pos2]=arr[pos1]-arr[pos2];
    arr[pos1]=arr[pos1]-arr[pos2];
}
void delete_element(int arr[],int pos1,int pos2,int size){
    if(pos1<pos2){
    for(int i=pos1;i>0;i--){
        swap(arr,i,i-1);
    }
    arr[0]=0;
    for(int i=pos2;i<size-2;i++){
        swap(arr,i,i+1);
    }
    arr[size-1]=0;}
    else{
        for(int i=pos2;i>0;i--){
        swap(arr,i,i-1);
    }
    arr[0]=0;
    for(int i=pos1;i<size-2;i++){
        swap(arr,i,i+1);
    }
    arr[size-1]=0;
    }
}
int find_element(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
void operation(int arr[],int pos1,int pos2,int size){
   int pos_max=max(arr[pos1],arr[pos2]);
   int pos_min=min(arr[pos1],arr[pos2]);
   delete_element(arr,pos1,pos2,size);
   arr[0]=pos_min;
   arr[size-1]=pos_max;
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    while(!sorted(arr,size)){
        if(arr[size-1]!=size){
            int pos_max=find_element(arr,arr[size-1]+1,size);
            int pos_min=find_element(arr,least_arrzero(arr,size),size);
            operation(arr,pos_max,pos_min,size);
            count++;
        }
        else{
            int pos_max=find_element(arr,arr[size-1]-1,size);
            int pos_min=find_element(arr,least_arrzero1(arr,size),size);
            operation(arr,pos_max,pos_min,size);
            count++;
        }

        cout<<"running"<<endl;
        cout<<count<<endl;
        printarr(arr,size);
        sleep(2);
    }
   cout<<"ended"<<endl;
}
return 0;
}