#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 0) return "";
        
        string ans = "";
        string s = *min_element(strs.begin(), strs.end()); //la primera palabra
        for(int i = 0; i < s.size(); i++){ //solo quiero comparar hasta ese tamaño
            for(int j = 0; j < strs.size(); j++){ //voy contra todos
                if(s[i] != strs[j][i]){ //si ya no coincide me salgo
                    return ans;
                }
            }
            ans.push_back(s[i]); //Agrega al final del vector
        }
        return ans;
    }
};

int main(){
    vector<string> strs = {"flights","fligh","flight"};
    
    cout<<(new Solution())->longestCommonPrefix(strs)<<endl;
}
