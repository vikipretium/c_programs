#include<stdio.h>
#include<curses.h>

float start_point , end_point, total_area;
int numtraps;

void input(void);
float find_area(float, float, int);
float trap_area(float, float, float);
float fuction_x(float);

void main()
{
	void input(void);
	float find_area(float a , float b , int n);
	printf("Area under the curve");
	input();
	total_area=find_area(start_point, end_point, numtraps);
	printf("The Total area is %f",total_area);
}

void input(void)
{
	printf("Enter the lower limit: ");
	scanf("%f", & start_point);
	printf("Enter the upper limit: ");
	scanf("%f", & end_point);
	printf("Enter the Number of Trapezoids: ");
	scanf("%d", & numtraps);

}
float find_area(float a, float b, int n)
{
	float base, h1, h2, lower;
	float function_x(float x);
	float trap_area(float h1, float h2, float base);
	base = (b-a)/n;
	lower = a;

for(lower=a;lower<=b-base;lower=lower+base)
{
	h1=function_x(lower);
	h2=function_x(lower+base);
	total_area+=trap_area(h1,h2,base);
}
return(total_area);
}

float trap_area(float h1,float h2,float base)
{
	float area;
	area = 0.5*(h1*h2)*base;
	return(area);
}

float function_x(float x)
{
	return(x*x+1);
}

	
