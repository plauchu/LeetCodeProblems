class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int n = columnTitle.size()-1;

        string col = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
        unordered_map<char, int>  cubeta;
    
        int i = 1;
        for(char c : col){
            cubeta[c] = i;
            i++;
        }
        
        int cons = 26;
        for(char c : columnTitle){
            ans = ans + pow(cons, n) * cubeta[c];
            n--;
        }
        return ans;
    }
};