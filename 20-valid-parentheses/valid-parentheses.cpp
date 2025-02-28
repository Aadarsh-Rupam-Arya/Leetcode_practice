class Solution {
public:
    bool isValid(string s) {
        //check
        // stack<char> st;
        // unordered_map<char, char> brackets = {{')', '('}, {'}', '{'}, {']', '['}};

        // for (char c : s) {
        //     if (brackets.count(c)) {
        //         if (st.empty() || st.top() != brackets[c]) return false;
        //             st.pop();
        //         } else {
        //             st.push(c);
        //         }
        //     }
        // return st.empty(); 


        stack<char> st;


        for(char c : s){
            if(c == '(' || c == '{' || c == '[' ){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                else{
                    char ch = st.top();
                    if( (c == ')' && ch == '(') || (c == '}' && ch == '{') || (c == ']' && ch == '[') ){
                        st.pop();
                    }
                    else{
                        return false;
                    }

                }
            }
        }
        return st.empty();
    }
};