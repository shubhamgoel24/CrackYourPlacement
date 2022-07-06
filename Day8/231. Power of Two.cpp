class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        int i=0;
        long int s=0;
        while(s<n){
            s=pow(2,i);
            i++;
        }
        return s==n;
    }
};