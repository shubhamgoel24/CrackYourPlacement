class Solution {
public:
    string simplifyPath(string p) {
        int i=0;
        stack<string> v;
        string ans;
        while(i<p.length()){
            while(i<p.length() && p[i]=='/'){
                i++;
            }
            int j=i;
            while(j<p.length() && p[j]!='/')
                j++;
            string x=p.substr(i,j-i);
            if(x==".."){
                if(!v.empty())
                    v.pop();
            }
            else if(x=="." || x==""){}
            else
                v.push(x);
            i=j+1;
        }
        while(!v.empty()){
            ans.insert(0,("/"+v.top()));
            v.pop();
        }
        if(ans.length()==0)
            ans+="/";
        return ans;
    }
};