class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int repeat=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                repeat=nums[i];
                break;
            }
        }
        int sum=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum-=nums[i];
        }
        return {repeat,sum+repeat};
    }
};