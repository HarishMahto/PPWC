#include<stdio.h>
#include<string.h>

#define STRSIZ 10

struct planet_t{
char name[STRSIZ];
double diameter;
int moons;
double orbit_time, rotation_time;
};
struct planet_t getplanet();
 int main(){
 
 struct planet_t currentplanet;
 currentplanet = getplanet();
 
 printf("%s %lf %d %lf %lf\n", currentplanet.name, currentplanet.diameter, currentplanet.moons, currentplanet.orbit_time, currentplanet.rotation_time);
 
 
  
 }
 
struct planet_t getplanet(){
struct planet_t planet;
 
 scanf("%s%lf%d%lf%lf", planet.name,
&planet.diameter,
&planet.moons,
&planet.orbit_time,
&planet.rotation_time);
 
 
 return (planet);
 
 }
