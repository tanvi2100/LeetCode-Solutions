class Solution {
public:
    bool rotateString(string a, string b) {
        int m = a.size();
        int n = b.size();
        if(m!=n){
            return false;
        }
        string temp = a+a;
        return (temp.find(b) != string::npos);
    }
};
