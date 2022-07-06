bool sol(int n,unordered_map<int,int> m){
    if(m[n]>0 || n<=0)
        return false;
    if(n==1)
        return true;
    int x=0;
    m[n]++;
    while(n>0){
        x+=(pow(n%10,2));
        n/=10;
    }
    return sol(x,m);
}

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> m;
        return sol(n,m);
    }
};