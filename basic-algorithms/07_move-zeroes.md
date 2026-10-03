## Problem: Move Zeroes

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a two-pointer approach to move all zeroes to the end of the array while maintaining the relative order of the non-zero elements.

I use `position` to keep track of where the next non-zero element should be placed.

I iterate through the array and, whenever I find a non-zero element, I place it at `nums[position]` and increment `position`.

After all non-zero elements have been moved to the beginning of the array, I fill the remaining positions with `0`.

For example, for `[0,1,0,3,12]`, the non-zero elements are moved to the beginning in their original order, resulting in `[1,3,12,0,0]`.

### Complexity

* Time: O(n)

* Space: O(1)

### Notes

The array is modified in-place, so no additional array is created.

The relative order of the non-zero elements is preserved because they are processed from left to right.

The solution also handles edge cases such as an array containing only zeroes or an array containing no zeroes.
