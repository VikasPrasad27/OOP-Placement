#include <iostream>
#include<vector>
using namespace std;

int binarysearch(int num){
    vector<int> nums={2,4,6,7,8,10};
    int n=nums.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==num){
            return num;
        }
        if(nums[mid]<num){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int index=binarysearch(8);
    if(index!=-1){
        cout<<"NUMber found at:"<<index;
    }else{
        cout<<"NUMber Not found";
    }
    return 0;
}