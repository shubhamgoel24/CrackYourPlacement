class Solution {
public:
    void sortColors(vector<int>& nums) {
        int w=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && i>=w){
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin(),0);
                w++;
                b++;
            }
            else if(nums[i]==1 && (i<=w || i>b)){
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin()+w,1);
                b++;
            }
            else if(nums[i]==2 && (i<b)){
                nums.erase(nums.begin()+i);
                nums.push_back(2);
                b--;
            }
        }
    }
};