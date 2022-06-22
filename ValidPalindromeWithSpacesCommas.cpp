class Solution {
public:
    bool isPalindrome(string S) {
        int s = 0;
        int e = S.size() - 1;
        
        while(s <= e){
            
            while(s < e && !isalnum(S[s])) s++;
            while(s < e && !isalnum(S[e])) e--;
            
            if(toupper(S[s]) != toupper(S[e])) return false;
            
            s++;
            e--;
        }
        return true;
    }
};