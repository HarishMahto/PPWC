#include <stdlib.h> /* gives access to calloc */

#include<stdio.h>

#define STRSIZ 10

struct planet_t{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};

void scan_planet(struct planet_t *plnp);
int main(void)
{
char *string1;
int *array_of_nums;
struct planet_t *array_of_planets;
int str_siz, num_nums, num_planets, i;

printf("Enter string length and string> ");
scanf("%d", &str_siz);
string1 = (char *)calloc(str_siz, sizeof (char));
scanf("%s", string1);
printf("%s", string1);

printf("\nHow many numbers?> ");
scanf("%d", &num_nums);
array_of_nums = (int *)calloc(num_nums, sizeof (int));
array_of_nums[0] = 5;
for (i = 1; i < num_nums; ++i)
  array_of_nums[i] = array_of_nums[i - 1] * i;

for (i = 1; i < num_nums; ++i)
   printf("array_of_nums[%d] = %d\n", i, array_of_nums[i]);


printf("\nEnter number of planets and planet data> ");
scanf("%d", &num_planets);


array_of_planets = (struct planet_t *)calloc(num_planets, sizeof (struct planet_t));

for (i = 0; i < num_planets; ++i)
    scan_planet(&array_of_planets[i]);
  return 0;
  
  }
  
void scan_planet(struct planet_t *plnp){

printf("Enter the info of planets: \n");

scanf("%s%lf%d%lf%lf", (*plnp).name, &(*plnp).diameter, &(*plnp).moons, &(*plnp).orbit_time, &(*plnp).rotation_time);

printf("%s %f %d %f %f\n", (*plnp).name, (*plnp).diameter, (*plnp).moons, (*plnp).orbit_time, (*plnp).rotation_time);
}

