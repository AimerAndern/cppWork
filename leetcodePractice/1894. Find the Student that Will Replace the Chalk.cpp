class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long div = 0;
        for (int i :chalk){
            div+=i;
        }
        int rem = k%div;
        for (int i =0;i<chalk.size();++i){
            if (chalk[i]>rem){
                return i;
            } else {
                rem-=chalk[i];
            }
        }
        return 0;
    }
};