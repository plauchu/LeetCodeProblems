class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        int i = 0;
        while(i<n){
            if(s[i] != ' '){ //mientras no sea un espacio
                count++;
                i++;
            }else{ // es un espacio
                while(i<n && s[i] == ' ') i++; //por si hay más de 1 espacio
                
                if(i == n){ //final de string
                    return count;
                }else{ //pasamos a la sig. palabra
                    count = 0;
                }
            }
        }
        return count;
    }
};