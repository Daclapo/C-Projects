#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
// Declarrar dos punteros a dos estructuras para la stack A, y la B.
	t_stack_node	*a;
	t_stack_node	*b;

	// Se inicializan a NULL
	a = NULL;
	b = NULL;

// Controlar errores de arg count. Estos argumentos deben ser dos o mas.	
	if (argc == 1 || (argc == 2 && !argv[1][0]))
	// Devolver error en caso de error.
		return (1);

// Manejamos la entrada, si es una String, utilizamos split.
	else if (argc == 2)
		argv = split(argv[1], ' ');

// Inicializamos la stack A, concatendando cada numero que hemos recibido.
	// Hay que controlar int overflow, duplicados, errores de sintaxis.
		// Si hay errores, liberar (free) la stack A, y devolver error.
	// Comprobar que todos los numeros sean 'long int'.
		// Si no lo son, convertirlos.
	// Concatenar cada nodo (long int) a la stack A.




// Ordenacion:

// Comprobar si la stack A esta ordenada.
	// Si no esta ordenada, implementar el algoritmo de ordenacion
		// Comprobar si hay 2 numeros:
			// Hacer un simple SA para intercambiar los dos primeros nodos de la stack A.
		// Comprobar si hay 3 nunmeros:
			// Implementar el algoritmo 'sort three'
		// Comprobar que hay mas de 3 numeros:
			// Implementar el algoritmo 'turco'



// Limpiar y liberar las dos stacks.

}


