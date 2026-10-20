class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int alias = INT_MAX;
        for (int i=0;i<nums.size();i++){
            alias=min(alias,nums[i]);
        }
        return alias;
        
    }
};