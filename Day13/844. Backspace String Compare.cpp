class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int a=0,b=0;
        while(a<s.length() || b<t.length()){
            if(a<s.length() && s[a]=='#'){
                if(a!=0){
                    s.erase(a-1,2);
                    a-=2;
                }
                else{
                    s.erase(0,1);
                    a--;
                }
            }
            if(b<t.length() && t[b]=='#'){
                if(b!=0){
                    t.erase(b-1,2);
                    b-=2;
                }
                else{
                    t.erase(0,1);
                    b--;
                }
            }
            a++;
            b++;
        }
        return s==t;
    }
};