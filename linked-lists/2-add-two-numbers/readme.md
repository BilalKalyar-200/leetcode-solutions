# 1. Two Sum

Link: https://leetcode.com/problems/add-two-numbers/<br>
Difficulty: Medium<br>
Pattern: Linked list traversal + carry propagation

## Approach

Traverse both linked lists at the same time, digit by digit
At each step:

1. Add l1's current digit (if it exists), l2's current digit
   (if it exists), and any carry from the previous step.
2. The new node's value is sum % 10.
3. The new carry is sum / 10.
4. Move both pointers forward if they still have nodes left.

## Complexity

- Time: O(max(m, n)) ->m,n lenghts of l1,l2
- Space: O(max(m, n)) ->its of new linked list
