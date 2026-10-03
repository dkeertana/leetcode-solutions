## Problem: Binary Search

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search algorithm because the input array is sorted in ascending order.

I maintain two pointers:

* `left` points to the beginning of the current search range.
* `right` points to the end of the current search range.

I calculate the middle index using:

`mid = left + (right - left) / 2`

If `nums[mid]` is equal to the target, I return `mid`.

If `nums[mid]` is smaller than the target, I know the target can only be on the right side, so I move `left` to `mid + 1`.

If `nums[mid]` is greater than the target, I search the left side by moving `right` to `mid - 1`.

If `left` becomes greater than `right`, the target does not exist in the array, so I return `-1`.

### Complexity

* Time: O(log n)

* Space: O(1)

### Notes

Binary search works because the array is sorted. With every iteration, approximately half of the remaining search space is eliminated.

For `[-1,0,3,5,9,12]` with target `9`, the function returns index `4`.

For the same array with target `2`, the target is not found, so the function returns `-1`.
