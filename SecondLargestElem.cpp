#include <iostream>
using namespace std;

int main(){
    int nums[]={1,3,2,5,6,3};
    int largest=INT8_MIN;
    int slargest=INT8_MIN;
    int n=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<=n;i++){
        if(nums[i]>largest){
            slargest=largest;
            largest=nums[i];
        }else if(nums[i]>slargest && nums[i]!=largest){
            slargest=nums[i];
        }
    }
    cout<<"largest:"<<largest<<endl;
    cout<<"SECOND largest:"<<slargest;
    return 0;
}