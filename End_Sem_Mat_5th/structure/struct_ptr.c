/*
#include<stdio.h>
#include<string.h>
#define STRSIZ 10
struct planet_t{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};
int main(){
struct planet_t current_planet  = {"Earth", 56.7, 8, 45.6, 78.9};
struct planet_t *ptr;
ptr = &current_planet;

printf("name  = %s  dia = %lf  moon = %d orbit_ time = %lf rot_time = %lf \n", ptr->name, (*ptr).diameter, (*ptr).moons, ptr->orbit_time, ptr->rotation_time);

}

*/


//passing an structure element to a function
#include<stdio.h>
struct book{
  int page;
  };
int fun_pr(int *p);
  
int main(){

struct book b1;
b1.page = 34;
//fun_pr(b1.page);
fun_pr(&b1.page);
}

//int fun_pr(int p) {
int fun_pr(int *p) {
*p = *p + 4;
 printf("page = %d\n",*p);
 // printf("page = %d\n",p);
 return 0;
 }




/*
//Passing entire structure as function argument:
#include<stdio.h>
#include<string.h>
#define STRSIZ 10
struct planet_t{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};
int scan_planet(struct planet_t *plnp);
int main(){
struct planet_t current_planet;

int status = scan_planet(&current_planet);

printf("The status is %d\n", status);

printf("name  = %s  dia = %lf  moon = %d orbit_ time = %lf rot_time = %lf \n", current_planet.name, current_planet.diameter, current_planet.moons, current_planet.orbit_time, current_planet.rotation_time);

}

int scan_planet(struct planet_t *plnp){

int result = scanf("%s%lf%d%lf%lf", (*plnp).name, &(*plnp).diameter, &(*plnp).moons, &(*plnp).orbit_time, &(*plnp).rotation_time);
return(result);
}
*/


