# Push Swap

### Resumen

Proyecto que debe ordenar una serie de numeros pasados como parametros, en un stack, utilizando un conjunto limitado de instrucciones, y utilizando el menor numero posible de acciones. 


A tu disposicion tienes un conjunto de ints, 2 stacks, y un conjunto de instrucciones para manipular estos stacks.


Debes escribir un programa en C, llamado `push_swap`. 
El programa ordenara los numeros pasados como parametro, e imprimira en la salida estandar, las intrucciones utilizadas para ordenar estos numeros.



### Objetivos

Escribir un algoritmo de ordenamineto, topandose con el concepto de complejidad (n).



### Enunciado

Tienes 2 stacks, llamados a y b.
•Para empezar:
◦El stack a contiene una cantidad aleatoria de números positivos y/o negativos,
nunca duplicados.
◦El stack b está vacío.
•El objetivo es ordenar los números del stack a en orden ascendente. Para hacerlo
tienes las siguientes operaciones a tu disposición:
sa swap a: Intercambia los dos primeros elementos del stack a. No hace nada si
hay uno o menos elementos.
sb swap b: Intercambia los dos primeros elementos del stack b. No hace nada si
hay uno o menos elementos.
ss swap a y swap b a la vez.
pa push a: Toma el primer elemento del stack b y lo pone el primero en el stack
a. No hace nada si b está vacío.
pb push b: Toma el primer elemento del stack a y lo pone el primero en el stack
b. No hace nada si a está vacío.
ra rotate a: Desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.
rb rotate b: Desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.
rr ra y rb al mismo tiempo.
rra reverse rotate a: Desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.
rrb reverse rotate b: Desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.
rrr rra y rrb al mismo tiempo.



