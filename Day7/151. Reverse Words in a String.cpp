class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        stack<string> x;
        while(i<s.length()){
            while(i<s.length() && s[i]==' ')
                i++;
            int j=i;
            while(j<s.length() && s[j]!=' ')
                j++;
            string y=s.substr(i,j-i);
            if(y!="")
                x.push(y);
            i=j+1;
        }
        string ans="";
        while(!x.empty()){
            ans+=x.top();
            x.pop();
            if(!x.empty())
                ans+=" ";
        }
        return ans;
    }
};