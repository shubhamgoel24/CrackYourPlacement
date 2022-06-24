class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int check = 0;
        for (int num : nums) {
            if (count == 0) {
                check = num;
            }
            count += (num == check) ? 1 : -1;
        }
        return check;
    }
};