#include <iostream>
using namespace std;
int find_pipeline(unsigned long int n,unsigned long int k){
   unsigned long int low=2,high=k;
    unsigned long int sum,mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        sum=(k*(k+1)/2)-(mid*(mid-1)/2)+mid-k;
        
        if(n>((k*(k+1)/2)-(k-1))){
            
            return -1;
        }
        if(n<=k){
            return 1;
        }
        if (sum == n){
            return mid;
        }
        if (sum < n){
            high = mid - 1;
            continue;
        }
        else
            low = mid + 1;
    }
    return k-low+2;
}
int main(){
   unsigned long int n;
    cin>>n; 
   unsigned long int k;
    cin>>k;
    cout<<find_pipeline(n,k);
    return 0;
}