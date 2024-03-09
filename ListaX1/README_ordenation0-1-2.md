# List - Construction and Algorithm Analysis 2023.2 Prof. Dr. Carlos Eduardo Fisch de Brito
By: Lucas Cabral Amador Mourão

## Ordenation 0-1-2 

Imagine the list L is a list of size n where

- n/3 of the elements are 0
- n/3 of the elements are 1
- n/3 of the elements are 2

### The problem consists in ordenate a list L in time O(n). And the restriction is: this has to be done only by calls to the function swap(i, j) // swap the elements of positions i, j <br/> Present an algorithm that performs this task. And present your analysis to demonstrate that it runs in O(n) time.

### ALGORITHM ANALYSIS:
- For this problem, I followed a logic similar to Ordenation 0-1. I started by ordering the 0s. For this, I will do the same as the previous problem. Two "sliding" variables, one at each end of the list: 'i' and 'j'. At the end of the process, all 0s are the first third of the list and the rest of the list is made up of 1s and 2s, unordered. To order them, again, we follow the same logic. Two new "sliding" variables: 'x' and 'y'. This way, the same logic applies. Finally, we ordered the entire list as follows: first third made up of 0s, second third made up of 1s, and third third made up of 2s.

### Analysing the time of exection:

- The function swap(i, j) doesn't have much asymptotic cost. Time complexity: O(1)
In the first while loop, in which we order the 0s, the worst that can happen is 'i' reaches position (n/3) - 1 and 'j' reaches position (n/3) + 1. Finally, in the last iteration, which will be the stopping one, 'i' or 'j' will change. Thus, the list is almost entirely covered, in the worst case. So the asymptotic time of the first while loop is O(n).

- In the second while, in which we sort the rest of the list, the worst that can happen is that 'x' reaches position (2n/3) - 1 and 'j' reaches position (2n/3) + 1. And, in the last iteration, which will be the stopping one, 'x' or 'y' will change. Thus, two-thirds of the list is covered, in the worst case.

- Summing the execution times, we have: O(1) + O(n) + O(2n/3) ~= O(n) (asymptotically equal to 'n').

### Total execution time: O(n).
