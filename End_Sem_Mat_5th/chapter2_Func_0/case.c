/*Chapter2 Func case study */
#include<stdio.h>
#define pi 3.142

int main(){
double hole_dia; //diameter of the hole 
double edge_dia;
double thickness;
double density;
double quantity;
double weight;
double hole_rad;
double edge_rad;
double rim_area;
double unit_wt;

/*Get the inner diameter, outer diameter and thickness*/

printf("Inner diameter in centimeters> ");
scanf("%lf", &hole_dia);
printf("Outer diameter in centimeters> ");
scanf("%lf", &edge_dia);
printf("Thickness in centimeters> ");
scanf("%lf", &thickness);

/* Get the material density and quantity manufactured. */

printf("Material density in grams per cubic centimeter> ");
scanf("%lf", &density);
printf("Quantity in batch> ");
scanf("%lf", &quantity);

/* Compute the rim area. */
hole_rad = hole_dia / 2.0;
edge_rad = edge_dia / 2.0;

rim_area = pi * edge_rad * edge_rad - pi * hole_rad * hole_rad;

/* Compute the weight of a flat washer. */
unit_wt = rim_area * thickness * density;
/* Compute the weight of the batch of washers. */
weight = unit_wt * quantity;
/* Display the weight of the batch of washers. */
printf("\nThe expected weight of the batch is %.2f", weight);
printf(" grams.\n");
return (0);

}
