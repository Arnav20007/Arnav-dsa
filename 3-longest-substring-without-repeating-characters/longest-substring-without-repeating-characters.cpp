class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
int maxLen = 0;
for(int right = 0; right < s.length(); right++) {
   while(st.count(s[right])){
        
st.erase(s[left]);
left++;
}
st.insert(s[right]);
int currentLen = right - left + 1;
 maxLen=max(maxLen,currentLen);       }
       
        return maxLen;
    }
};