# Push Swap
---
### Resumen

Proyecto que debe ordenar una serie de numeros pasados como parametros, en un stack, utilizando un conjunto limitado de instrucciones, y utilizando el menor numero posible de acciones. 


A tu disposicion tienes un conjunto de ints, 2 stacks, y un conjunto de instrucciones para manipular estos stacks.


Debes escribir un programa en C, llamado `push_swap`. 
El programa ordenara los numeros pasados como parametro, e imprimira en la salida estandar, las intrucciones utilizadas para ordenar estos numeros.


---
### Objetivos

Escribir un algoritmo de ordenamineto, topandose con el concepto de complejidad (n).


---
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


Estas operaciones son:
push, swap and rotate.


List of instructions is as follows:

sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.


---
### Conceptos del Proyecto:

#### Que es una Stack?

Una stack es una pila de cajas, almacenadas una encima de la otra. 
Hay una caja de arriba, y una caja de abajo.
Para este proyecto, se utilizaran liked lists para crear las stacks.


#### Que es una LinkedList?

Es una estructura de datos, compuesta de nodos.
Cada nodo almacena un dato, en nuestro caso ints.

**Caracteristicas de la lista enlazada:** 
Cada nodo esta conectado en secuencia. El "head node", nodo de arriba, esta conectando al segundo, el segundo al tercero, y asi sucesivamente, hasta el "tail node", el ultimo nodo, que es el de abajo.

Para este proyecto, utilizaremos una lista enlazada bidireccional. Cada nodo, ademas de tener una referencia al siguiente nodo (del 1ro al 2do, del 2do al 3ro), tendra tambien una referencia al nodo previo (del 2do, al 1ro, del 3ro al 2do).

Cada nodo almacenara debera almacenar 4 datos; 
- El valor del nodo (en nuestro caso un int)
- Su indice en la stack un int
- *next (un puntero a el siguiente nodo)
- *prev (un puntero al nodo anterior).

El *next (puntero de referencia) del 'tail node', el ultimo nodo de la lista, apuntara a NULL, `*next -> NULL`.


#### Operaciones posibles:


***swap:***
sa, sb, ss

***rotate:***
ra, rb, rr

***reverse rotate:***
rra, rrb, rrr

***push:***
pa, pb







### Links:

[Medium Search](https://medium.com/@antoanantoniev/list/pushswap-b7e76a5f39e9)

[Abdelhaid Salah](https://medium.com/@abdelhadi-salah/push-swap-42-e0abfe0e0fef)

[A. Yigit Ogun](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

[Ulysse Gerkens](https://medium.com/@ulysse.gerkens/push-swap-in-less-than-4200-operations-c292f034f6c0)



[Leo Fu](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)

[MannBell](https://m4nnb3ll.medium.com/my-journey-to-find-a-good-sorting-algorithm-for-the-push-swap-42-project-4a18bc38b474)


[Gitbook](https://42-cursus.gitbook.io/guide/rank-02/push_swap)

Videos

[Oceano](https://www.youtube.com/watch?v=OaG81sDEpVk)
[Thuggonaut](https://www.youtube.com/watch?v=wRvipSG4Mmk)

#### Evaluation:
https://42evals.me/Cursus/Push_swap/
