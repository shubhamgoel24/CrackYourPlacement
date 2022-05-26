class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i+1<nums.size() && nums[i+1]==nums[i]){
                ans.push_back(nums[i]);
                while(i+1<nums.size() && nums[i+1]==nums[i]){
                    i++;
                }
            }
        }
        return ans;
    }
};