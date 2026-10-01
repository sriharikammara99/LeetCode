class Solution {
public:
    int guessNumber(int n) {
        long long l=1,r=n;
        while(l<=r){
            long long m=(l+r)/2;
            if(guess(m)==0) return m;
            if(guess(m)<0) r=m-1; else l=m+1;
        }
        return -1;
    }
};