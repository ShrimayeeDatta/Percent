#include <stdio.h>

int main()
{
    float physics, chemistry, maths, cs, english, out;
    float sum, avg, percent;
    printf("Enter marks in Physics ");
    scanf("%f", &physics);
    printf("Enter marks in Chemistry ");
    scanf("%f", &chemistry);
    printf("Enter marks in Maths ");
    scanf("%f", &maths);
    printf("Enter marks in Computer Science ");
    scanf("%f", &cs);
    printf("Enter marks in English ");
    scanf("%f", &english);
     printf("Enter marks out of for a subject ");
    scanf("%f", &out);
    
    sum = physics + chemistry + maths + cs + english;
    avg = sum/5;
    percent = (avg/out)*100;
    printf("\n Average Marks: %f", avg);
    printf("\n Percentage: %f", percent);
    return 0;
}
