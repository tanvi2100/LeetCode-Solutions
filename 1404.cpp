class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        while(s.size()>1){
            if(s.back()=='0'){
                s.pop_back();
                steps++;
                continue;
            }
            bool flag = false;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i] == '0'){
                    s[i] = '1';
                    flag = true;
                    break;
                }
                s[i] = '0';
            }
            if(!flag){
                s = '1' + s;
            }
            steps++;
        }
        return steps;
    }
};
