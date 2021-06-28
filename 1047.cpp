class Solution {
public:
    string removeDuplicates(string str) {
        if(str.length() == 1){
            return str;
        }
        stack<char> s;
        for(char c: str){
            if(!s.empty() && c == s.top()){
                    s.pop();
            }
            else{
                s.push(c);
            }
        }
        string ans = "";
        while(!s.empty()){
            ans = s.top() + ans;
            s.pop();
        }
        return ans;
    }
};
