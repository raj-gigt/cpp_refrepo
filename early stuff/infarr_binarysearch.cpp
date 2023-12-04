#include <iostream>

using namespace std;
int binarySearch(int array[], int number_to_search_for,int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((number_to_search_for) == array[mid]){
            return mid;
        }
        if (number_to_search_for >array[mid]){
            low = mid + 1;
        }
        if (number_to_search_for <array[mid]){
            high = mid - 1;
        }
    }
  return -1;
}
int expo(int num,int pow){
    if(pow<1){
        return 1;
    }
    return num*expo(num,pow-1);
}
int infarr(int arr[],int target){
    int start=0,end=2;
    int i=1;
    while(1){
        int n = binarySearch(arr,target,start,end);
        if(binarySearch(arr,target,start,end)==-1){   
        start=end+1;
          if(target<arr[start]){
            return -1;
          }
        end = end + expo(2,i)+2;
        i++;
        }
        else{
            return n;
        }
    }

}
int main(){
   int test[]={1,3,6,7,8,24,35,54,61,67,74,86,98,100};
    cout<<"enter your target"<<endl;
    int tar;
    cin>>tar;
    cout<<"your target"<<endl;
    cout<<"target index is "<<endl<<infarr(test,tar);
    return 0;
}