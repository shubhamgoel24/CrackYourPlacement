class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<=3) return {};
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-3; i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int low = j+1; int high = nums.size()-1;
                int sum = target-(nums[i]+nums[j]);
                while(high>low){
                    if(nums[low] + nums[high] == sum){
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        while(high>low and nums[low] == nums[low+1]) 
                            low++;
                        while(high>low and nums[high] == nums[high-1]) 
                            high--;
                        low++; 
                        high--;
                    }else if(nums[low] + nums[high] > sum){
                        high--;
                    }else{
                        low++;
                    }

                }
                while(j<nums.size()-2 && nums[j]==nums[j+1]){
                    j++;
                }
            }
            while(i<nums.size()-2 && nums[i]==nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};