#include<bits/stdc++.h>
using namespace std;
void findDuplicates(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i])-1;
            if(nums[idx]>0){ //first appearance
                nums[idx] = -nums[idx];
            }
            else{//second appearance
                cout<<idx+1<<" ";
            }
        }
}
int main()
{
    int n,x;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    findDuplicates(nums);
    return 0;
}