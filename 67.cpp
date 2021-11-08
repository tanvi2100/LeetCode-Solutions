class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        string str;
        while(i>=0 || j>=0){
            int sum = carry;
            if(i>=0){
                sum += a[i]-'0';
            }
            if(j>=0){
                sum += b[j]-'0';
            }
            str += to_string(sum%2);
            carry = sum/2;
            i--;
            j--;
        }
        if(carry!=0){
            str += to_string(carry);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
