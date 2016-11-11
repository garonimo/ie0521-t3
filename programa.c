/*
*	Universidad de Costa Rica
*	Escuela de Ingeniería Eléctrica
*	IE-0521 Estructuras de Computadoras Digitales II
*
*	Quiz #9
*
*   Autores:
* 		Andrey Pérez Salazar - B25084
* 		Andrés Sánchez López - B26214
*
*	Descripción: Este archivo es el código solicitado en la segunda parte
*   de la tarea programada 3, y corrresponde al quiz 9. 
*/

#include <stdio.h>
#include <assert.h>

void getResults(int* a, int* b, int* c, int* d, int* e, int* f, int* g, int* r1, int* r2)
{
		assert(a);
		assert(b);
		assert(c);
		assert(d);
		assert(e);
		assert(f);
		assert(g);
		assert(r1);
		assert(r2);

        *r1=*a+*b+*c+*d-*e-*f; //Primer cálculo
        *r2=*a+*b+*c+*d+*e-*f; //Segundo cálculo
        
        if (*g>4) {
			printf("El setimo término es mayor a 4\n");
		}
		else {
			printf("El setimo término es menor o igual a 4\n");
		}

}


main()
{
	int a, b, c, d, e, f, g; //Variables a utilizar
	int r1, r2;          	 //Variables para guardar los resultados
	a = 1;
	b = 4;
	c = 2;
	d = 7;
	e = 4;
	f = 6;
	g = 3;
	
	getResults(&a, &b, &c, &d, &e, &f, &g, &r1, &r2);
	printf("El primer resultado es: %d\n", r1);
	printf("El segundo resultado es: %d\n", r2);
	
	
}
