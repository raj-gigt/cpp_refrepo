#include <iostream>
#include <vector>

using namespace std;
void printarr(vector <vector<int> >& arr);
void n_queens(int n,int row,int col,vector <vector<int> >& arr,){
    if(col==n){
        printarr(arr);
        return;
    }

}