class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0)
			return 0;
		int profit = 0;
		prices.insert(prices.begin(), 10000);
		prices.push_back(-1);
		bool flag = 0;
		int price = prices[0];
		for (int i = 1; i < prices.size(); i++)
		{
			if (flag == 0)
			{
				if (prices[i] > prices[i - 1])
				{
					price = prices[i - 1];
					flag = 1;
				}
			}
			else
			{
				if (prices[i] < prices[i - 1])
				{
					profit += prices[i - 1] - price;
					price = prices[i];
					flag = 0;
				}
			}
		}
		return profit;
	}
};