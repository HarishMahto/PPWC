/*
#include<stdio.h>
#include<string.h>
#define STRSIZ 10
struct planet{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};
int main(){
struct planet current_planet, previous_planet,
blank_planet = {"", 0, 0, 0, 0};
strcpy(current_planet.name, "Jupiter");
current_planet.moons= 80;
current_planet.orbit_time = 11.9;

printf("%s 's has %d moons with orbit time %f secs\n", current_planet.name, current_planet.moons, current_planet.orbit_time);

}
*/



//------------------------------------------------------------------------------

/*
#include<stdio.h>
#include<string.h>

#define STRSIZ 10

struct planet{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};
void print_planet(struct planet pl);
int main(){
struct planet current_planet, previous_planet, blank_planet = {"", 0, 0, 0, 0};
strcpy(current_planet.name, "Jupiter");
current_planet.moons= 80;
current_planet.orbit_time = 11.9;
print_planet(current_planet);
}
void print_planet(struct planet pl){
printf("%s 's has %d moons with orbit time %f secs\n", pl.name, pl.moons, pl.orbit_time);

}*/





//Function Comparing Two Structured Values for Equality-------------------------------------------------------------
/*
#include<stdio.h>
#include<string.h>

#define STRSIZ 10

struct planet{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};

int planet_equal(struct planet p1, struct planet p2);

int main(){
struct planet planet_1 ={"Jupiter", 20.3, 80, 11.9, 350.7};
struct planet planet_2 = {"Neptune", 20.3, 80, 11.9, 350.7};

int n = planet_equal(planet_1, planet_2);

printf("The returned value is %d \n", n);

}
int planet_equal(struct planet p1, struct planet p2){

int n;

n= strcmp(p1.name, p2.name) == 0
&&
p1.diameter == p2.diameter
&&
p1.moons == p2.moons
&&
p1.orbit_time == p2.orbit_time &&
p1.rotation_time == p2.rotation_time;


return n;
}
*/


#include<stdio.h>
#include<string.h>

#define STRSIZ 10

struct planet{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};

int planet_equal(struct planet p1, struct planet p2);

int main(){
struct planet planet_1 ={"Jupiter", 20.3, 80, 11.9, 350.7};
struct planet planet_2 = {"Jupiter", 20.3, 80, 11.9, 350.7};



printf("The returned value is %d \n", planet_equal(planet_1, planet_2));

}
int planet_equal(struct planet p1, struct planet p2){

return (strcmp(p1.name, p2.name) == 0
&&
p1.diameter == p2.diameter
&&
p1.moons == p2.moons
&&
p1.orbit_time == p2.orbit_time &&
p1.rotation_time == p2.rotation_time);
}















