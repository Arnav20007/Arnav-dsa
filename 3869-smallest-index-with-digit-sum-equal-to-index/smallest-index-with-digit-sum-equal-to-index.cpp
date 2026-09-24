class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
           int sum = 0;
            int d = nums[i];
             while(d>0){
                int digit=d%10;
            sum=sum+digit;
            d=d/10;

            }
            if(sum==i){
                 return i;
                break;
            }
           
        }
         return -1;
    }
};