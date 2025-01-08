//  Allocating memory through malloc
/*the data type ( void * ) of the value returned by malloc should always be cast to the specific type we need*/
/*
#include<stdio.h>
#include <stdlib.h>
void main(){

int *nump;
char *x;

nump = (int *)malloc(sizeof (int));
*nump = 56;
printf("The value at nump is %d \n", *nump);

x = (char *)malloc(sizeof (char));
*x = 'A';
printf("The value at x is %c \n", *x);
}
*/



#include<stdio.h>
#include <stdlib.h>

struct planet_t{
char name[10];
double diameter;
int moons;
};
int main(){

struct planet_t *planet;

planet =  (struct planet_t *)malloc(sizeof (struct planet_t));

struct planet_t current_planet = {"earth", 78.9 , 1};
*planet = current_planet;
printf("The name of the planet is %s with %d moons and diameter %f\n", (*planet).name, (*planet).moons, (*planet).diameter);
free(planet);
return 0;
}
