class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        string ans="";
        int i=0;
        while(i<s[0].length()){
            char a=s[0][i];
            for(int j=1;j<s.size();j++){
                if(s[j][i]!=a)
                    return ans;
            }
            ans+=a;
            i++;
        }
        return ans;
    }
};