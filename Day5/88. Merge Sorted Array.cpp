class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(n>0){
            nums1.pop_back();
            n--;
        }
        nums1.insert( nums1.begin()+m, nums2.begin(), nums2.end() );
        sort(nums1.begin(),nums1.end());
    }
};