class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        vector<int> st{};
        int N = rolls.size();
        unordered_set<int> mp;
        for (int i = 0; i < N; i++) 
        {
            mp.insert(rolls[i]);
            if (mp.size() == k) {
                st.push_back(rolls[i]);
                mp.clear();
            }
        }
        for (char i = 1; i <= k + 1;i++) 
        {
            if (mp.count(i) == 0) {
                st.push_back(i);
                return st.size();
            }
        }
        return st.size();
    }
};