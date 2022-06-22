class Solution {
public:
    
    bool check(string S, int s, int e){
        while(s <= e){
            if(toupper(S[s]) != toupper(S[e])){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    
    bool validPalindrome(string S) {
        int s = 0;
        int e = S.size() - 1;
        
        while(s <= e){
            if(toupper(S[s]) != toupper(S[e])){
                if(check(S, s + 1, e) || check(S, s, e - 1)){
                    return true;
                } else{
                    return false;
                } 
            }
            s++;
            e--;
        }
        return true;
    }
};