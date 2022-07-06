class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int p=0,q=0;
        for(int i=0;i<nums.size();i++){
            p+=nums[i];
            q+=i;
        }
        q+=nums.size();
        return q-p;      
    }
};