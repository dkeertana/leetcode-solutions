## Problem: Reverse String (Easy)

**Link:** [https://leetcode.com/problems/reverse-string/](https://leetcode.com/problems/reverse-string/)

### Approach

I used a two-pointer approach to reverse the string in-place.

I initialized two pointers:
- `left` at the beginning of the array.
- `right` at the end of the array.

While `left` is less than `right`, I swap the characters at these two positions. Then I move `left` one position forward and `right` one position backward.

This continues until the two pointers meet or cross. Since the input array is modified directly, no additional array is needed.

### Complexity

* Time: O(n)

* Space: O(1)

### Notes

I tested the solution with the examples `"hello"` and `"Hannah"`. The two-pointer approach correctly reverses the characters while modifying the original array in-place.

The use of a temporary `char` variable allows each pair of characters to be swapped without requiring additional memory proportional to the size of the string.