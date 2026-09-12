class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int ,vector<int>> position ;
        for ( int i=0 ;i<nums.size();i++){
            position[nums[i]].push_back(i);
        }
        int ans = 0;
        
        for (auto x:position){
            if (x.second.size() >=3){
                
                bool equallyspaced = true;
                for ( int i =2; i<x.second.size();i++){
                    int diff= x.second[1]-x.second[0];
                    int currentdifference= (x.second[i]-x.second[i-1]) ;
                    if (currentdifference!=diff){
                        equallyspaced=false;
                    }
                }
                if (equallyspaced)
                    ans++;
            }
        }     
        return ans;
    }
};