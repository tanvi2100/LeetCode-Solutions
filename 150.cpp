class Solution {
public:
    bool isdigit(string s)
    {
        if(s[0]>='0' && s[0]<='9' || s[0]=='-' && 1<s.length()) 
            return true;
        return false;
    }
    
    int operation(int n,int m,string &oper){
    if(oper=="+"){
        return n+m;
    }
    else if(oper=="-"){
        return n-m;
    }
    else if(oper=="*"){
        return n*m;
    }
    else{
        return n/m;
    }
}
   
    int evalRPN(vector<string>& s) {
    stack<int>values;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            values.push(stoi(s[i]));
        }
        else{
            int val2=values.top();
            values.pop();
            int val1=values.top();
            values.pop();
            values.push(operation(val1,val2,s[i]));
        }
    }
    return values.top();
    }
};
