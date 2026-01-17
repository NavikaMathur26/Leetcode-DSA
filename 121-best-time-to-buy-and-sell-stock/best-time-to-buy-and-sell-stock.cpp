class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpf=0;
        int findmin=prices[0];
        for(int i=0;i<prices.size()-1;i++){
            findmin=min(findmin,prices[i]);
            int profit=prices[i+1]-findmin;
            maxpf=max(maxpf,profit);
        }
        return maxpf;
    }
};