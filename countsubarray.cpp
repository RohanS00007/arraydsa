#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        int count=0;
        long long presum=0;
        unordered_map<long long,int>mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            long long rem=presum-k;
            if(mpp.find(rem)!=mpp.end()){
                count+=mpp[rem];
            }
            if(mpp.find(presum)!=mpp.end()){
                mpp[presum]+=1;
            }
            else{
                mpp[presum]=1;
            }

        }
        return count;
int main(){
    return 0;

}

