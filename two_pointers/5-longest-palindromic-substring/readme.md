# 5. Longest Palindromic Substring

Link: https://leetcode.com/problems/longest-palindromic-substring/<br>
Difficulty: Medium<br>
Pattern: Two pointers (expand around center)

## Approach

A palindrome is symmetric around a center. Instead of checking every
possible substring (brute force), pick each index as a potential
"center" and expand outward with two pointers (left, right) as
long as the characters on both sides match.

There are two types of centers one for even length and one for odd lenght,
which are expanded differently.

## Complexity

- Time: O(n^2)
- Space: O(1)
