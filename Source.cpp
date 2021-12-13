#include <iostream>
#include <math.h>
using namespace std;


#define PI 3.14159265

// iterative factorial
double fact(double n)
{
	double fact = 1, i;
	for (i = 1; i <= n; i++)
		fact *= i;
	return fact;
}

int main()
{
	int upper_i; double x;
	printf("Enter the upper limit to i\n ");
	scanf_s("%d", &upper_i);
	printf("Enter value of x:\n ");
	scanf_s("%lf", &x);
	printf("upper limit to i is %d ,x= %lf \n", upper_i, x);



	clock_t t;
	t = clock();
	double cos_result = 0;
	for (int i = 0; i < upper_i; i++)
	{
		cos_result += (pow(-1, i) * pow((x * (PI / 180.0)), 2 * i)) / fact(2 * i);
	}
	printf("Cos value is %f \n", cos_result);
	t = clock() - t;
	double time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds

	printf("the sequential version of the cos function took %f seconds to execute \n", time_taken);



}