int sol(vector<vector<int>>& b,int i,int j){
    int x=0;
    int p=j,q=j;
    if(j-1>=0){
        p=j-1;
        x+=b[i][j-1];
    }
    if(j+1<b[0].size()){
        q=j+1;
        x+=b[i][j+1];
    }
    if(i-1>=0)
        for(int a=p;a<=q;a++)
            x+=b[i-1][a];
    if(i+1<b.size())
        for(int a=p;a<=q;a++)
            x+=b[i+1][a];
    
    if(b[i][j]==1){
        if(x<2)
            return 0;
        if(x==2 || x==3)
            return 1;
        if(x>3)
            return 0;
    }else if(b[i][j]==0 && x==3){
        return 1;
    }
    return 0;
}
class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        vector<vector<int>> ans;
        for(int i=0;i<b.size();i++){
            vector<int> x;
            for(int j=0;j<b[0].size();j++){
                x.push_back(sol(b,i,j));
            }
            ans.push_back(x);
        }
        b=ans;
        return;
    }
};