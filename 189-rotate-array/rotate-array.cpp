class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
         int start=0;
         int end=nums.size()-k;
       reverse(nums.begin() + start, nums.begin() + end);
    
         start=nums.size()-k;
        end =nums.size();
        reverse(nums.begin() + start, nums.begin() + end);
        reverse(nums.begin(), nums.end());
        }
};