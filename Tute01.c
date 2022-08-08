/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main ()
{
	int m1,m2;
	int sum;
	float avg;
	//input the marks of two subjects
	printf("Enter mark1:");
	scanf("%d",&m1);
	printf("Enter mark2:");
	scanf("%d",&m2);
	
	//calculate the sum
	sum=m1+m2;
	//calculate the average
	avg=sum/2;
	//output the avg
	printf("The average is:%.2f",avg);
	
	return 0;
}

