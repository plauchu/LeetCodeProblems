class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                //necesitamos 2 elementos
                int v1 = st.top();
                st.pop();
                int v2 = st.top();
                st.pop();
                
                if(tokens[i] == "+"){
                    st.push(v2+v1); //lo metemos a la pila
                } else if(tokens[i] == "-"){
                    st.push(v2-v1); //lo metemos a la pila
                } else if(tokens[i] == "*"){
                    st.push(v2*v1); //lo metemos a la pila
                } else if(tokens[i] == "/"){
                    st.push(v2/v1); //lo metemos a la pila
                }
            } else {
                st.push(atoi(tokens[i].c_str()));
            }
        }
        return st.top();
    }
};