class Solution {
public:
    bool isValid(string s) {
        int l= s.length();
    stack<char>c;
    for(int i=0;i<l;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            c.push(s[i]);
            
        }
        else if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(c.empty()){
                return false;
            }
            else if(c.top()=='(' && s[i]==')'){
                c.pop();
            }
             else if(c.top()=='{' && s[i]=='}'){
                c.pop();
            }
             else if(c.top()=='[' && s[i]==']'){
                c.pop();
            }
            else{
                return false;
            }
            
        }
    }
    if(c.empty()){
        return true;
    }
    else{
        return false;
    }
    }
};
