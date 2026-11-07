class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;
        for (int x : nums){
            freq[x]++;
        }
        vector<int> ans;
        int maxFreq = 0;
        for (auto it : freq){
            maxFreq = max(maxFreq, it.second);
        }
        for (int round = 1; round <= maxFreq; round++){
            for (auto it : freq) {
                if (it.second >= round){
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};