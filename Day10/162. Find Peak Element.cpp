class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i-1>0 && nums[i]<nums[i-1])
                continue;   
            if(i+1<nums.size() && nums[i]<nums[i+1])
                continue;
            return i;
        }
        return -1;
    }
};