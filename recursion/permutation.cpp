#include <iostream>
#include <vector>
#include <set>
using namespace std;

void Print_Vector(vector<int> Vec) 
{ 
    for (int i = 0; i < Vec.size(); i++) { 
        cout << Vec[i] << " "; 
    } 
    cout << endl; 
    return; 
} 
void permut(int index,int n,set <vector<int> > ans,vector <int> arr){
    if(index==n){
        ans.insert(arr);
        Print_Vector(arr);
        return;
    }
    permut(index+1,n,ans,arr);
    if(index==0){
        swap(arr[0],arr[n-1]);
        permut(index+1,n,ans,arr);
        swap(arr[0],arr[n-1]);
    }
    else{
        swap(arr[index-1],arr[index]);
        permut(index+1,n,ans,arr);
        swap(arr[index-1],arr[index]);
    }
}
void printSet(set <vector<int> > ans){
for (auto it = ans.begin(); 
         it != ans.end(); 
         it++) { 
  
        Print_Vector(*it); 
    } 
    return;
}
int main(){
    vector <int> arr;
    for(int i=1;i<=5;i++){
        arr.push_back(i);
    }
    set <vector<int> > ans;
    permut(0,arr.size(),ans,arr);
    
    cout<<"hello";
    return 0;
}