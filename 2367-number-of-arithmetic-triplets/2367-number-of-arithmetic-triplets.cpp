class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>mp;
        int cnt=0;
        for(auto it:nums)if((mp[it]=mp[it-diff]+1)>=3)cnt++;
        return cnt;
    }
};