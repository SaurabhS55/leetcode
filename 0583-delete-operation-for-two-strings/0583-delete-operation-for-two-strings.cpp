class Solution {
public:
    int minDistance(string word1, string word2) {
        
        //tabulation
        // int n=word1.length(),m=word2.length();
        // vector<vector<int>> dp(n+1,vector<int>(m+1));
        // //base case
        // for(int i=0;i<n+1;i++){
        //     dp[i][0]=0;
        // }
        // for(int i=0;i<m+1;i++){
        //     dp[0][i]=0;
        // }
        // //dp table
        // for(int i=1;i<n+1;i++){
        //     for(int j=1;j<m+1;j++){
        //         if(word1[i-1]==word2[j-1]){
        //             dp[i][j]=1+dp[i-1][j-1];
        //         }
        //         else{
        //             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        //         }
        //     }
        // }
        // return (m+n)-(2*dp[n][m]);
        
        //space optimization
        int n=word1.length(),m=word2.length();
        vector<int> prev(m+1,0);
        //dp table
        for(int i=1;i<n+1;i++){
            vector<int> temp(m+1);
            temp[0]=0;
            for(int j=1;j<m+1;j++){
                if(word1[i-1]==word2[j-1]){
                    temp[j]=1+prev[j-1];
                }
                else{
                    temp[j]=max(temp[j-1],prev[j]);
                }
            }
            prev=temp;
        }
        return (m+n)-(2*prev[m]);
    }
};