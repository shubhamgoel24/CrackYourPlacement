void gp(int n, int open, int close,string s, vector<string>& ans)
{
    if (open == n && close == n) {
        ans.push_back(s);
        return;
    }
    if (open < n)
        gp(n, open + 1, close, s + "(",ans);
    if (close < open)
        gp(n, open, close + 1, s + ")",ans);
}
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gp(n,0,0,"",ans);
        return ans;
    }
};