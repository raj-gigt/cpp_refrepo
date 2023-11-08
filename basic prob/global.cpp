#include <iostream>
using namespace std;
typedef long long int ll;

int main(){
    int size;
    cin>>size;
    ll arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    ll prefixsum[size];
    prefixsum[0]=arr[0];
    for(int i=1;i<size;i++){
        prefixsum[i]=prefixsum[i-1]+arr[i];
    }
    int q;
    cin>>q;
    int beg,end;
    for(int j=0;j<q;j++){
        cin>>beg>>end;
        if(beg!=0){
        cout<<prefixsum[end]-prefixsum[beg-1]<<endl;}
        else{
            cout<<prefixsum[end]<<endl;
        }
    }
    return 0;
} 