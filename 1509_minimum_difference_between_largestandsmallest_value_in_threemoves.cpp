class Solution {
public:
    int minDifference(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int n = nums.size();
        int min = INT_MAX;
        if(n<=3) return 0;
        for(int i=1; i<=4; i++)
        {
            min = std::min(min, abs(nums[n-i] - nums[4-i]));
        }
        return min;
    }
};
