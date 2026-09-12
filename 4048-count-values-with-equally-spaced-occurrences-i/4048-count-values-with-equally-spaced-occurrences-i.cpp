class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int ,vector<int>> position ;
        for ( int i=0 ;i<nums.size();i++){
            position[nums[i]].push_back(i);
        }
        int ans = 0;
        for (auto x:position){
            if ( x.second.size()==3){
                if ( x.second[1]-x.second[0]== x.second[2]-x.second[1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};