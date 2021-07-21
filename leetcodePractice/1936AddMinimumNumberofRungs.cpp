class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int curr=0;
        int opt =0;
        for (int i:rungs){
            if (curr+dist<i){
                opt+=(i-curr-1)/dist;
            }
            curr=i;
        }
        return opt;
    }
};