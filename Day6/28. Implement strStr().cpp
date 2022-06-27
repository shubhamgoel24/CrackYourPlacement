class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.length();
        int n=needle.length();
        if(n==0)
            return 0;
        if(h<n)
            return -1;
        for(int i=0;i<h-n+1;i++){
            if(needle==haystack.substr(i,n))
                return i;
        }
        return -1;
    }
};