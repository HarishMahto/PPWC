//Program to predicts the score needed on a final exam to achieve a desired grade in a course.
#include<stdio.h>
void main(){
char dg;
double min_avg, curr_avg, final_count, score_needed;
printf("Enter desired grade> "); 
scanf("%c", &dg);
printf("\nEnter minimum average required> ");
scanf("%lf",&min_avg);
printf("\nEnter current average in course> ");
scanf("%lf", &curr_avg);
printf("\nEnter how much the final counts as a percentage of the course grade> \n" );
scanf("%lf", &final_count);

score_needed = (min_avg - (1 - final_count/100) * curr_avg) / (final_count/100);
printf("You need a score of %lf on the final to get a %c.\n",score_needed, dg );
}
