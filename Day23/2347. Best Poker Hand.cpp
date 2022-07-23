class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<char,int> s;
        for(char i:suits){
            s[i]++;
        }
        int c=0;
        for(auto i:s){
            if(i.second>c)
                c=i.second;
        }
        if(c==5)
            return "Flush";
        c=0;
        map<int,int> r;
        for(int i:ranks){
            r[i]++;
        }
        for(auto i:r){
            if(i.second>c)
                c=i.second;
        }
        if(c>=3)
            return "Three of a Kind";
        else if(c>=2)
            return "Pair";
        return "High Card";
    }
};