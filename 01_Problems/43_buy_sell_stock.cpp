// Find max profit every time buy and sell the stock

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int buyingPrice = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (buyingPrice > prices[i])
        {
            buyingPrice = prices[i];
        }
        else
        {
            profit += prices[i] - buyingPrice;
            buyingPrice = prices[i];
        }
    }

    return profit;
}

int main()
{

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    // vector<int> prices = {7,6,4,3,1};
    // vector<int> prices = {2, 4, 1};
    // vector<int> prices = {2,1,2,0,1};

    int profit = maxProfit(prices);
    cout << profit << endl;
    return 0;
}