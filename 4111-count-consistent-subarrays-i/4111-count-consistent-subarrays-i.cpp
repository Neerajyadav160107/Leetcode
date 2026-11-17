class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        // initilising andvalue and minvalue to nums[i]
        for (int i = 0; i < n; i++) {
            int andvalue = nums[i];
            int minvalue = nums[i];
            // checking bitwise and of nums[j] if equals to minvalue is equal to
            // bitwise and of nums[j] to check the consistency of the subarray
            // then incrementing to ans.
            for (int j = i; j < n ; j++) {
                andvalue &= nums[j];
                minvalue = min(minvalue, nums[j]);

                if (andvalue == minvalue) {
                    ans++;
                }
            }
        }
        return ans;
    }

};