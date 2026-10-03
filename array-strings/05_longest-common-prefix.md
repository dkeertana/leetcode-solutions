## Problem: Longest Common Prefix!(image.png)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used a character-by-character comparison approach.

I compare each character of the first string with the corresponding character of all the other strings. If every string has the same character at the current position, I continue to the next position.

If a character differs between any of the strings, or if one of the strings ends, I terminate the prefix at that position and return the common prefix.

For example, with `["flower", "flow", "flight"]`:

* The first character `f` is common.
* The second character `l` is common.
* The third character differs (`o`, `o`, `i`).

Therefore, the longest common prefix is `"fl"`.

### Complexity

* Time: O(n × m), where `n` is the number of strings and `m` is the length of the shortest string.

* Space: O(1)

### Notes

The solution uses the first string as the result and modifies it in-place by adding a `'\0'` at the position where the common prefix ends.

This avoids creating a separate character array for the result.

For `["dog", "racecar", "car"]`, the first characters are different, so the function returns an empty string `""`.
