class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> m;
        int ans=0;
        for(int x:answers) if(m[x]++%(x+1)==0) ans+=x+1;
        return ans;
    }
};