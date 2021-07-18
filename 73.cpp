// Solution 1

class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int row[m],col[n];
        memset(row,1,sizeof(row));
        memset(col,1,sizeof(col));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0){
                    row[i]=0,
                    col[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==0 || col[j]==0){
                    a[i][j]=0;
                }
            }
        }
    }
};

// Solution 2

class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int col = 1;
        for(int i=0;i<m;i++){
            if(a[i][0]==0){
                col = 0;
            }
            for(int j=1;j<n;j++){
                if(a[i][j]==0){
                    a[i][0] = a[0][j] = 0;
                }
            }
        }
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=1;j--){
                if( a[i][0] == 0 || a[0][j] == 0){
                    a[i][j]=0;
                }
            }
            if(col==0){
                a[i][0] = 0;
            }
        }
    }
};
