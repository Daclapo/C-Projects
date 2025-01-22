#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<unistd.h>
#include<stdbool.h>

typedef struct s_stack_node
{
	int	num;  
	int	push_cost;
	bool	above_median;
	bool	cheapest;
	struct s_stack_node *next;
	struct s_stack_node *prev;
	struct s_stack_node *target_node;	
}	t_stack_node;



// Funciones que vamos a necesitar:

// Control de errores
// Inicializacion de stacks
// Inicializacion de nodos
// Stack utils
	// Longitud de stack
	// Ultimo nodo
	// Nodo con el numero mas alto y mas bajo
// Operaciones: sa, sb, ss | ra, rb, rr | rra, rrb, rrr | pa, pb
// Algoritmos
	// Sort three
	// Algoritmo turco
	

#endif