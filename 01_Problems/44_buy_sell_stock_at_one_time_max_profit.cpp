// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int buyingPrice = prices[0];
    int profit = 0;
    int overallProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (buyingPrice > prices[i])
        {
            buyingPrice = prices[i];
        }

        profit = prices[i] - buyingPrice;
        if(overallProfit < profit) {
           overallProfit = profit;
        }
    }

    return overallProfit;
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