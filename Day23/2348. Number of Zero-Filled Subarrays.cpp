class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,c=0;
        for(int i:nums){
            if(i==0)
                c++;
            else if(c!=0){
                ans+=(c * (c + 1) / 2);
                c=0;
            }
        }
        ans+=(c * (c + 1) / 2);
        return ans;
    }
};