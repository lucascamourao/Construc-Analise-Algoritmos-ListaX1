List - Construction and Algorithm Analysis 2023.2 Prof. Dr. Carlos Eduardo Fisch de Brito

By: Lucas Cabral Amador Mourão

Ordenation 0-1-2

Imagine que a lista L é uma lista de tamanho n onde
Imagine a list L is of length n which

n/3 of the elements are 0
n/3 of the elements are 1
n/3 of the elements are 2

The problem consists in ordenate a list L in time O(n). And the restriction is: this has to be done only by calls to the function Swap(i, j) // swap the elements of positions i, j 
O problema consiste em ordenar a lista L em tempo O(n). E a restrição é que isso deve ser feito apenas por meio de chamadas à função Troca(i,j) // troca os elementos das posições i,j de lugar 
Apresente um algoritmo que realiza essa tarefa. E apresente a sua analise, para demonstrar que ele executa em tempo O(n).
ANÁLISE DO ALGORITMO:

Para esse problema, segui uma lógica parecida com o Ordenação 0-1. Comecei ordenando os 0s. Para isso, eu vou fazer igual ao problema anterior. Duas variáveis "deslizantes", uma em cada ponta da lista: 'i' e 'j'. Ao final do processo, todos os 0s são o primeiro terço da lista e o resto da lista é composta de 1s e 2s, não ordenados. Para ordenar-los, novamente, seguimos a mesma lógica. Duas novas variáveis "deslizantes": 'x' e 'y'. Dessa forma, aplica-se a mesma lógica. Por fim, ordenamos toda a lista da seguinte forma: primeiro terço composto de 0s, segundo terço composto de 1s e terceiro terço composto de 2s.

Analysing the time of exection:

The function troca(i, j) não tem muito custo assintótico. Time complexity: O(1)

In the first while, which we order the 0s, o pior que pode acontecer é o 'i' chegar até a posição (n/3) - 1 e o 'j' chegar na posição (n/3) + 1. E, na última iteração, que será a de parada, o 'i' ou o 'j' irá mudar. Assim, a lista é percorrida praticamente inteira, no pior caso. Logo, tempo assintótico do primeiro while é O(n).

In the second while, o qual ordenamos o resto da lista, o pior que pode acontecer é o 'x' chegar até a posição (2n/3) - 1 e o 'j' chegar na posição (2n/3) + 1. E, na última iteração, que será a de parada, o 'x' ou o 'y' irá mudar. Assim, dois terços da lista são percorridos, no pior caso.

Somando-se os tempos de execução, temos: O(1) + O(n) + O(2n/3) ~= O(n) (assintoticamente igual a 'n').

Total time of execution: O(n).
