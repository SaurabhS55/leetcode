class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int c=0,t=money;
        for(int i:prices){
            if((t-i)<0)break;
            if(c==2)break;
            t-=i;
            c++;
        }
        return c!=2?money:t;
    }
};