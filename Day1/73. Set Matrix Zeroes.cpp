class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<vector<int>> k;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                if(m[i][j]==0){
                    k.push_back({i,j});
                }
            }
        }
        
        for(int z=0;z<k.size();z++){
            int i=k[z][0];
            int j=k[z][1];
            for(int a=0;a<m.size();a++){
                m[a][j]=0;
            }
            for(int a=0;a<m[i].size();a++){
                m[i][a]=0;
            }
        }
        
    }
};