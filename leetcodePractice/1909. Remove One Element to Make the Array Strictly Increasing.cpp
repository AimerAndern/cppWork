class Solution {

private:
    
    bool isSorted(vector<int>& nums){
        for (int i =1;i<nums.size();i++){
            if (nums[i]<=nums[i-1]){
                return false;
            }
        }
        return true;
    }
public:
    bool canBeIncreasing(vector<int>& nums) {
        for (int i =0;i<nums.size();++i){
            int t = nums[i];
            nums.erase(nums.begin()+i);
            if (isSorted(nums)){
                return true;
            }
            nums.insert(nums.begin()+i,t);

        }
        return false;
    }
};

