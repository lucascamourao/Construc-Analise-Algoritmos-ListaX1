# List - Construction and Algorithm Analysis 2023.2 
Prof. Dr. Carlos Eduardo Fisch de Brito

By: Lucas Cabral Amador Mourão

## Ordenation 0-1

Imagine the list L is a list of size n where

- n/2 of the elements are 0
- n/2 of the elements are 1

### The problem consists in ordenate a list L in time O(n). And the restriction is: this has to be done only by calls to the function swap(i, j) // swap the elements of positions i, j <br/> Present an algorithm that performs this task. And present your analysis to demonstrate that it runs in O(n) time.

### ALGORITHM ANALYSIS:

- We have two "sliding" variables, one at the start and one at end of the list: 'i' and 'j'. We go through and, if on the left the element is not 0, we change it with the element in position j. Also, we go back to the left with the variable j. So, we throw what we don't want to the end. If the element of the current position i (up to (n/2) - 1) is equal to 0, then we move to the right with the variable i. As we go forward, all elements from position 0 to (n/2) - 1 are equal to 0. Therefore, the rest will be 1.

### Analysing the time of exection:

- The function swap(i, j) doesn't have much asymptotic cost. Time complexity: O(1)
- In the first while, the worst that can happen is that 'i' reaches position (n/2) - 1 and 'j' reaches position (n/2) + 1. And, in the last iteration, which will be the stopping one, 'i' or 'j' will change. Thus, the list is almost entirely covered, in the worst case. Therefore, asymptotic time of O(n).

### Total execution time: O(n).
