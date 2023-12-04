#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sum(vector <int> nums,int k){
        int sum=0;
        for(int i=0;i<=k;i++){
            sum+=nums[i];
        }
        return sum;
    }
    vector<int> answerQueries(vector<int> nums, vector <int> queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=queries.size();
        
        vector <int> output;
        int mid;
        for(int i=0;i<m;i++){
            int start=0,end=n-1;
            cout<<"for loop start"<<endl;
                if(sum(nums,end)<queries[i]){
                    cout<<"arr small"<<endl;
                    output.push_back(end+1);
                    continue;
                }
        while(start<=end){
            mid=start+(end-start)/2;
            if(sum(nums,mid)==queries[i]){
                output.push_back(mid+1);
                break;
            }
            else if(sum(nums,mid)<queries[i]){
                start=mid+1;
                cout<<"start mid+1"<<endl;
            }
            else{
                cout<<"end mid - 1"<<endl;
                end=mid-1;
            }

        }if(sum(nums,mid)==queries[i]){
            cout<<"cond hit"<<endl;
            continue;
        }
        cout<<"while ended"<<endl;
        output.push_back(end+1);
        }
        cout<<"for ended"<<endl;
        return output;
    }
    int main(){
        int num[4]={4,5,2,1};
        int querie[3]={3,10,21};
        vector <int> nums;
        vector <int> queries;
        for(int i=0;i<4;i++){
            nums.push_back(num[i]);
        }
        for(int j=0;j<3;j++){
            queries.push_back(querie[j]);
        }
        vector <int> b=answerQueries(nums,queries);
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
    return 0;
    }