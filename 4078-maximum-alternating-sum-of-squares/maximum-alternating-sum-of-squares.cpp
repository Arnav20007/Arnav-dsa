class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum=0;
        long long add=0;
        long long sub=0;
        int mid=nums.size()/2;
        
       sort(nums.begin(), nums.end(), [](int a, int b) {
    return abs(a) < abs(b);
});
        for(int i=0;i<mid;i++){
             sub-=1LL *nums[i]*nums[i];
        }
         for(int i=mid;i<nums.size();i++){
           
            add+=1LL *nums[i]*nums[i];
        }
        sum=add+sub;
        return sum;
    }
};