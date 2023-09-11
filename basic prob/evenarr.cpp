#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int arrsize;
        cin>>arrsize;
        int arr[arrsize];
        for(int j=0;j<arrsize;j++){
            cin>>arr[j];
        }
        int swap=0;
        for(int k=0;k<arrsize;k++){
            if((arr[k]%2!=0) && (k%2==0)){
                for(int l=1;l<arrsize;l++){
                    if(arr[l]%2==0){
                        int temp;
                        temp=arr[k];
                        arr[k]=arr[l];
                        arr[l]=temp;
                        swap++;
                        break;
                    }
                    l++;
                }
            }
        }
        if(swap==0 && ((arr[0]%2!=0) || (arr[1]%2==0))){
            cout<<-1<<endl;
            continue;
        }
        cout<<swap<<endl;
    }
    return 0;
}