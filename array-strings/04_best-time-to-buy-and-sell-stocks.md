## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a one-pass approach to find the maximum possible profit.

I keep track of the minimum stock price seen so far using `minPrice`. For each day, I calculate the profit that would be made by selling the stock on that day:

`profit = prices[i] - minPrice`

If the current price is lower than `minPrice`, I update `minPrice`.

I also keep track of the largest profit found so far using `maxProfit`. Since I only consider prices that appeared before the current day as the buying price, the buy day always comes before the sell day.

If the stock price continuously decreases, no positive profit is possible, so `maxProfit` remains `0`.

### Complexity

* Time: O(n)

* Space: O(1)

### Notes

The solution only requires one pass through the array and does not modify the input array.

For `[7,1,5,3,6,4]`, the lowest buying price found before the best selling price is `1`, and selling at `6` gives a maximum profit of `5`.

For `[7,6,4,3,1]`, the prices continuously decrease, so no profitable transaction is possible and the result is `0`.
