class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long odd = 0, even=nums[0];
        for (int i =0;i<nums.size();++i){
            odd = max(even-nums[i],odd);
            even = max(odd+nums[i],even);
        }
        return even;
    }
};
