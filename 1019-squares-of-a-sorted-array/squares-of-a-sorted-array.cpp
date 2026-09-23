class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer(nums.size());
      int left=0;
      int right=nums.size()-1;
      int pos = nums.size() - 1;
      for(int i=0;i<nums.size();i++){
if(nums[left]*nums[left]>nums[right]*nums[right]){
   answer[pos]=nums[left]*nums[left];
   left++;
   pos--;

}else{
    answer[pos]=nums[right]*nums[right];
    right--;
    pos--;
}
      } 
      return answer; 
    }
};