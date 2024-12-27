class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n= values.size();
        vector<int>v(n,0);
        v[0] = values[0]+0;
        for(int i=1;i<n;i++){
            v[i] = max(values[i]+i,v[i-1]);
        }
        int res = 0;
        for(int j=1;j<n;j++){
            int x = values[j]-j;
            int y = v[j-1];
            res = max(res,x+y);
        }
        return res;
    }
};