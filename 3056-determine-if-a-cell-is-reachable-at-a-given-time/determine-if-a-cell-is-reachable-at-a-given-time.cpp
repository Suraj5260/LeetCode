class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int mn = min(abs(sx-fx),abs(sy-fy)) + abs(abs(sx-fx) - abs(sy-fy));
        if(sx == fx && sy == fy && t == 1){
            return false;
        }
        if(mn <= t){
            return true;
        }
        return false;
    }
};