Lista - Construção e Análise de Algoritmos 2023.2
Prof. Dr. Carlos Eduardo Fisch de Brito

Atividade resolvida por: Lucas Cabral Amador Mourão

Tema 1: Ordenação 0-1

Imagine que a lista L é uma lista de tamanho n onde
- n/2 elementos são 0
- n/2 elementos são 1

O problema consiste em ordenar a lista L em tempo O(n).
E a restrição é que isso deve ser feito apenas por meio de chamadas à função
Troca(i,j), que troca os elementos das posições i,j de lugar.
Apresente um algoritmo que realiza essa tarefa.
E apresente a sua analise, para demonstrar que ele executa em tempo O(n).


ANÁLISE DO ALGORITMO:

Temos duas variáveis "deslizantes", uma em cada ponta da lista: 'i' e 'j'. Vamos percorrendo e, se pela esquerda o elemento não for 0,
trocamos com o elemento na posição j. Também, voltamos para a esquerda com a variável j. Assim, jogamos o que não queremos pro final. 
Se o elemento da atual posição i [até (n/2) - 1] for igual a 0, então avançamos para a direita com a variável i. 
À medida que vamos avançando, todos os elementos da posição 0 até a (n/2) - 1 são iguais a 0. Logo, o resto será 1. 

Analisando o tempo de execução:

A função troca(i, j) não tem muito custo assintótico. Tempo: O(1)

No while da linha 17, o pior que pode acontecer é o 'i' chegar até a posição (n/2) - 1 e o 'j' chegar na posição (n/2) + 1. E, na última
iteração, que será a de parada, o 'i' ou o 'j' irá mudar. Assim, a lista é percorrida praticamente inteira, no pior caso. 
Logo, tempo assintótico O(n). 

Tempo total de execução: O(n). 