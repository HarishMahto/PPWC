
//A simple structure declaration
#include<stdio.h>
#include<string.h>

typedef struct {

 char name[10];
 double dia;
 int moons;
 double orbit_time, rotation_time;
 }planet_t;
 
int main() {
 
planet_t p1;
 
 printf("Enter name dia moons and orbit time \n");
scanf("%s%lf%d%lf", p1.name, &p1.dia, &p1.moons, &p1.orbit_time);

printf("Name = %s Dia = %lf Moons = %d Or_time = %lf\n", p1.name, p1.dia, p1.moons, p1.orbit_time);
return (0); }














/*
#include<stdio.h>
#include<string.h>

typedef struct 
{
char name ;
float price ;
int pages ;
} book ;
main( )
{

struct book b1 = { 'B', 130.00, 550 } ;
printf ( "\nAddress of name = %u", &b1.name ) ;371
Chapter 10: Structures
printf ( "\nAddress of price = %u", &b1.price ) ;
printf ( "\nAddress of pages = %u", &b1.pages ) ;
}


*/
