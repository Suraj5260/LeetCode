class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int a = 0;
        int b = n-1;
        while(a < b){
            swap(s[a++],s[b--]);
        }
        
    }
};