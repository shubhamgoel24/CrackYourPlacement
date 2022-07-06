class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int n=x;
        unsigned long int y=0;
        while(n>y){
            y=(y*10)+n%10;
            n/=10;
        }
        return n==y || n==y/10;
    }
};