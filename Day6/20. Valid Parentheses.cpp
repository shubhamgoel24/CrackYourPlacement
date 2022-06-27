class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        int i=0;
        while(i<s.length()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                x.push(s[i]);
            if(x.empty())
                return false;
            else if(s[i]==')'){
                if(x.top()=='(')
                    x.pop();
                else
                    return false;
            }
            else if(s[i]=='}'){
                if(x.top()=='{')
                    x.pop();
                else
                    return false;
            }
            else if(s[i]==']'){
                if(x.top()=='[')
                    x.pop();
                else
                    return false;
            }
            i++;
        }
        return x.empty();
    }
};