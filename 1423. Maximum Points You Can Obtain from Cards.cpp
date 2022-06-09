class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int total=0;
        for(int i=0;i<k;i++){
            total+=c[i];
        }
        int best=total;
        int l=c.size()-1,r=k-1;
        while(r>=0){
            total-=c[r];
            r--;
            total+=c[l];
            l--;
            if(total>best)
                best=total;
        }
        return best;
    }
};