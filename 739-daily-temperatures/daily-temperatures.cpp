class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      stack<int>st;
      vector<int> answer(temperatures.size(), 0);
      for(int i=0;i<temperatures.size();i++){
while(!st.empty() && temperatures[i] > temperatures[st.top()]){
   int oldIndex = st.top();
answer[oldIndex] = i - oldIndex;
st.pop();

}
   st.push(i);
    }
    return answer;
    }
};