class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<=2) return {};
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-2; i++){
            if(i==0 or (i>0 and nums[i]!=nums[i-1]))
            {  
                int low = i+1; int high = nums.size()-1;
                int sum = -nums[i];
                while(high>low){
                    if(nums[low] + nums[high] == sum){
                        ans.push_back({nums[i],nums[low],nums[high]});
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
      
            }
        }
        return ans;
    }
};