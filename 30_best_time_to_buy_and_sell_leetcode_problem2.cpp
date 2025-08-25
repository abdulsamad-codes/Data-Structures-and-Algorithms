#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int buyDay = prices[0];
    int profit = 0;
    int i = 0;
    while (i < prices.size())
    {
        if (prices[i] < buyDay)
        {
            buyDay = i;
        }
        i++;
    }
    i = buyDay;
    int sellDay = prices[buyDay];

    while (i < prices.size() - 1)
    {
        if (prices[i] > sellDay)
        {
            sellDay = i;
        }
        i++;
    }

    if (prices[sellDay] > prices[buyDay])
    {
        profit = prices[sellDay] - prices[buyDay];
        return profit;
    }
    else
    {
        return 0;
    }
    return -1;
}
int main()
{
    vector<int> nums = {7, 6, 4, 3, 1};
    cout << maxProfit(nums);
    return 0;
}