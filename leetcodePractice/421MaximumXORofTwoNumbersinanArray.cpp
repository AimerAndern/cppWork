struct Trie {
    Trie* left = nullptr;
    Trie* right = nullptr;
    Trie() {}
};


class Solution {
private:
    Trie* root = new Trie();
    static constexpr int HIGH_BIT = 30;

public:
    void add(int num){
        Trie* cur = root;
        for (int k = HIGH_BIT;k>=0;--k){
            int bit = (num>>k)&1;
            if (bit == 0){
                if (!cur->left){
                    cur->left=new Trie();
                }
                cur=cur->left;
            }
            if (bit == 1){
                if (!cur->right){
                    cur->right=new Trie();
                }
                cur=cur->right;
            }
        }
    }

    int check(int num){
        Trie* cur = root;
        int x = 0;
        for (int k = HIGH_BIT;k>=0;--k){
            int bit = (num>>k)&1;
            if (bit == 0){
                if (!cur->right){
                    cur=cur->left;
                    x=x*2;
                } else{
                    cur=cur->right;
                    x=x*2+1;
                }
            }
            if (bit == 1){
                if (!cur->left){
                    cur=cur->right;
                    x=x*2;
                } else{
                    cur=cur->left;
                    x=x*2+1;
                }
            }
        }
        return x;
    }



    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for (int i =1;i<n;++i){
            add(nums[i-1]);
            x=max(x,check(nums[i]));
        }
        return x;
    }
};