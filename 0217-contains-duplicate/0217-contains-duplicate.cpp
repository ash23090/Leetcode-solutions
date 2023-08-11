class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto &i : nums)
            s.insert(i);
        
        if(s.size() < nums.size())return true;
        return false;
    }
};