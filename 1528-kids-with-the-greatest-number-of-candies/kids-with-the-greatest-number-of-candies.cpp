class Solution {
public:
// / int left=0;
        // int right=candies.size();
        // int mid=left+(right-left)/2;
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max_val = candies[0]; 
    for (int i = 1; i < candies.size(); i++) {
        if (candies[i] > max_val) {
            max_val = candies[i];  
        }
    }
     for (int i = 0; i < candies.size(); i++) {
    if(candies[i]+extraCandies>=max_val){
       ans.push_back(true);
}
else if(candies[i]+extraCandies<max_val){
       ans.push_back(false);}

}
      return ans;     
    }
};