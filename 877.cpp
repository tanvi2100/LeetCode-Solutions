class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int sumA = 0, sumB = 0;
        int i=0, j = n-1;
        bool flag = true;
        while(i<j){
            if(flag){
                if(piles[i]>piles[j]){
                    sumA += piles[i];
                    i++;
                }
                else{
                    sumA += piles[j];
                    j--;
                }
                flag = false;
            }
            else{
                if(piles[i]<piles[j]){
                    sumB += piles[i];
                    i++;
                }
                else{
                    sumB += piles[j];
                    j--;
                }
                flag = true;
            }
        }
        if(sumA>sumB){
            return true;
        }
        return false;
    }
};
