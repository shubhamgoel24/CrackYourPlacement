class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> ans;
        int h2=m.size()-1,l2=m[0].size()-1;
        int i=0,j=0,h1=0,l1=0;
        while(h1<=h2 && l1<=l2){
            for(j=l1;j<=l2;j++)
                ans.push_back(m[h1][j]);
            for(i=h1+1;i<=h2 && h1 != h2;i++)
                ans.push_back(m[i][l2]);
            for(j=l2-1;j>=l1 && h1 != h2;j--)
                ans.push_back(m[h2][j]);
            for(i=h2-1;i>h1 && l1 != l2;i--)
                ans.push_back(m[i][l1]);
            h1++;
            h2--;
            l1++;
            l2--;
            
        }
        return ans;
    }
};