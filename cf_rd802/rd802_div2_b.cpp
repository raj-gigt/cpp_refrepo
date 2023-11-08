#include <iostream>
using namespace std;
int power(int x, int y)
{
 
    // Initialize answer
    int res = 1;
 
    // Check till the number becomes zero
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
 
        // y = y/2
        y = y >> 1;
 
        // Change x to x^2
        x = (x * x);
    }
    return res;
}
int makin_n9(int n){
    return power(10,n)-1;
}
int makin_n1(int n){
    int res=0;
    for(int i=0;i<n;i++){
        res+=power(10,i);
    }
    return res;
}
int main(){
    int testcase;
    cin>>testcase;
    int n,num;
    for(int i=0;i<testcase;i++){
        
        cin>>n;
        cin>>num;
        if(((makin_n9(n)-num)/(power(10,n-1)))==0){
            cout<<makin_n1(n+1)-num<<endl;
        }
        else{
            cout<<makin_n9(n)-num<<endl;
        }
    }
    return 0;
}