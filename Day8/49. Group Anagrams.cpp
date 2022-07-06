class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<string> t=s;
        vector<pair<string,int>> x;
        for(int i=0;i<t.size();i++){
            sort(t[i].begin(),t[i].end());
            x.push_back(make_pair(t[i],i));
        }
        sort(x.begin(),x.end());
        vector<vector<string>> a;
        int i,p=0;
        for(i=1;i<x.size();i++){
            if(x[p].first != x[i].first){
                vector<string> temp;
                while(p<i){
                    temp.push_back(s[x[p].second]);
                    p++;
                }
                a.push_back(temp);
            }
        }
        vector<string> temp;
        while(p<i){
            temp.push_back(s[x[p].second]);
            p++;
        }
        a.push_back(temp);
        return a;
    }
};