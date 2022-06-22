class Solution {
public:
    void reverseString(vector<char>& S) {
        int s = 0;
        int e = S.size()-1;
        
        while(s < e){
            swap(S[s], S[e]);
            s++;
            e--;
        }
    }
};