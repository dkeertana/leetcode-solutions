## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach with two nested loops. For every pair of different elements, I checked whether their sum equals the target. When a matching pair is found, I return their indices.

### Complexity

* Time: O(n²)
* Space: O(1)

### Notes

I tested a typical case and an edge case containing duplicate values. The duplicate case helped confirm that two different indices can contain the same value and still form the required pair.
