class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int rightSum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
           sum=sum+nums[i];}
        for(int i=0;i<nums.size();i++){
           rightSum=sum-leftSum-nums[i];
         if(leftSum==rightSum){
            return i;
            }
            leftSum=leftSum+nums[i];
        }
            return -1; 
    }
};