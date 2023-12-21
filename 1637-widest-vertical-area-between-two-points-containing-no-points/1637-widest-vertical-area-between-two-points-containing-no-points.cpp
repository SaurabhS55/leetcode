class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        auto result=[](vector<int> p1,vector<int> p2){
            return p1[0]<p2[0];
        };
        sort(points.begin(),points.end(),result);
        int m=0;
        for(int i=1;i<points.size();i++){
            m=max(m,abs(points[i][0]-points[i-1][0]));
        }
        return m;
    }
};