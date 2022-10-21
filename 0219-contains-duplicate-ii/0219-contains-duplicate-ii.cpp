class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            if(mp.count(nums[i])){
                int diff = abs(mp[nums[i]] - i);
                if (diff <= k)return true;  
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};