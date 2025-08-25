#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int bestBuy = prices[0];
    int maximumProfit = 0;
    int i = 1;

    while (i < prices.size())
    {
        if (prices[i] > bestBuy)
        {
            maximumProfit = max(maximumProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
        i++;
    }
    if (maximumProfit <= 0)
        return 0;
    else
        return maximumProfit;
}
int main()
{
    vector<int> nums = {7, 6, 4, 3, 1};
    cout << maxProfit(nums);
    return 0;
}