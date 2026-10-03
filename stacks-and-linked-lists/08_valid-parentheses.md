## Problem: Valid Parentheses

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack-based approach to check whether the brackets are valid.

Whenever I encounter an opening bracket `(`, `[`, or `{`, I push it onto the stack.

When I encounter a closing bracket, I first check whether the stack is empty. If it is empty, there is no corresponding opening bracket, so I return `false`.

Otherwise, I remove the most recently added opening bracket from the stack and check whether it matches the current closing bracket.

This works because brackets must be closed in the correct order. The most recently opened bracket must always be the first one to be closed.

After processing the entire string, the stack must be empty for the string to be valid.

### Complexity

* Time: O(n)

* Space: O(n)

### Notes

I used a character array as the stack instead of creating a separate stack data structure.

For `"([])"`, the brackets are opened and closed in the correct order, so the result is `true`.

For `"([)]"`, `)` attempts to close `[` instead of `(`, so the result is `false`.

The maximum stack size is proportional to the length of the input string.
