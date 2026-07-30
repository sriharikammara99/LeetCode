class Solution {
public:
    bool canAliceWin(int n) {
        int remove=10;
        int moves=0;

        while(n>=remove){
            n-=remove;
            
            remove--;
            moves++;
        }

        return remove%2==1;
    }
};