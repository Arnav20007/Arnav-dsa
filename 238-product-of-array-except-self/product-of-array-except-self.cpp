class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> answer(nums.size());
        int result=1;
        int right=1;
        int left = 1;

for(int i = 0; i < nums.size(); i++) {
    answer[i] = left;
    left = left * nums[i];
}

for(int i = nums.size()-1; i >=0 ; i--) {
    answer[i] =answer[i]* right;
    right = right * nums[i];
     
}
        
        return answer;     
    }
};