#include <iostream>
using namespace std;
int max(int a,int b){
    if(b>a){
        return b;
    }
    return a;
}
int main(){
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int m,n;
        cin>>n>>m;
        int arr[n*m];
        int max_row,max_col;
        for(int j=0;j<n*m;j++){
            cin>>arr[j];
            if(arr[j]>arr[j-1]){
                max_row=(j+1)/m;
                max_col=(j+1)%m;
                if(max_col==0){
                    max_col=m;
                }
            }
        }
        int h,k;
        h=max(max_row,n-max_row+1);
        k=max(max_col,m-max_col+1);
        cout<<h*k<<endl;

    }
    return 0;
}