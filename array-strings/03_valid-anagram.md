## Problem: Valid Anagram (Easy)

**Link:** [https://leetcode.com/problems/valid-anagram/](https://leetcode.com/problems/valid-anagram/)

### Approach

I used a character-frequency counting approach.

Since the strings contain only lowercase English letters, I created an integer array of size 26 to store the frequency of each character.

First, I increment the count for every character in `s` and decrement the count for every character in `t`. If `s` and `t` are anagrams, every character will have the same frequency in both strings, so all values in the frequency array should be zero.

If any value is not zero, the strings contain different character frequencies, so I return `false`. Otherwise, I return `true`.

### Complexity

* Time: O(n)

* Space: O(1)

### Notes

The frequency array always has a fixed size of 26 because the input contains only lowercase English letters.

I also considered the case where the strings have different lengths. If their lengths are different, they cannot be anagrams, so the function can immediately return `false`.