class Solution {
public:
    int maxScore(string s) {
        int z=0,o=0;
        //count one and zeros
        for(char c:s){
            if(c=='0')z++;
            else o++;
        }
        int m=0;
        for(int i=1;i<s.length();i++){
            int z1=0,o1=0;
            for(int j=0;j<i;j++){
                if(s[j]=='0')z1++;
                else o1++;
            }
            m=max(m,(z1+abs(o-o1)));
        }
    return m;
    }
};