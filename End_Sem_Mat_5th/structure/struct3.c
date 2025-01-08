//Function with a Structured Output Argument-----------------------------------------------Passing entire structure as function argument:-----------------
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

printf("The status is %d", status);

}


int scan_planet(struct planet_t *plnp) 
{

FILE *inp;
FILE *outp;
int result;
/*result = scanf("%s%lf%d%lf%lf", (*plnp).name,
&(*plnp).diameter,
&(*plnp).moons,
&(*plnp).orbit_time,
&(*plnp).rotation_time);*/


inp = fopen("data.txt", "r");
outp = fopen("outdata.txt", "w");

result = fscanf(inp,"%s%lf%d%lf%lf", (*plnp).name,
&(*plnp).diameter,
&(*plnp).moons,
&(*plnp).orbit_time,
&(*plnp).rotation_time);

printf("The value of res is %d", result);

fprintf(outp, "%s %f %d %f %f", (*plnp).name,
(*plnp).diameter,
(*plnp).moons,
(*plnp).orbit_time,
(*plnp).rotation_time);




if (result == 5)
result = 1;
else if (result != EOF)
result = 0;
return (result);
}
