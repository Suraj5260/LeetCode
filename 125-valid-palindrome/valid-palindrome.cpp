class Solution {
    bool isValid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        
        return 0;
    }
    char toLower(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            ch = ch - 'A' + 'a';
            return ch;
        }
    }
    // bool finalAns(string t){

    // }
public:
    bool isPalindrome(string s) {
        
        string temp = "";

        // remove useless Chars
        for(int i =0; i < s.length(); i ++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }

        // convert to lower
        // for(int j = 0; j < temp.length(); j++){
        //     temp[j] = toLower(temp[j]);
        // }

        int a = 0;
        int b = temp.length() - 1;

        while(a <= b){
            if(toLower(temp[a]) != toLower(temp[b])){
                return 0;
            }
            else{
                a++;
                b--;
            }
        }
        return 1;
    }
};