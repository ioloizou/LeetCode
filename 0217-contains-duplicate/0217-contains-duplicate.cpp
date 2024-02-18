class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> counter_map;
        for (auto i : nums) counter_map[i]++;
        for (auto i : counter_map){
            if(i.second >= 2) return true;
        }
        return false;
    }
};