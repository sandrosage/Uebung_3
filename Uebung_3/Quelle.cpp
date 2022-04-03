#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double function_f(double x)
{
	return (sqrt((1 / x) - 1) - sqrt((1 / x) + 1));
}

double other_function(double x)
{
	return 2 / (sqrt((1 / x) - 1) - sqrt((1 / x) + 1));
}

/*
int main()
{
	for (double i = 1e-18; i > 1e-21; i = i - 1e-21)
	{
		printf("Funktion_f: %.20lf\n", function_f(i));
		printf("Other_function: %.20lf\n", other_function(i));

	}
	return 0;
}*/