#include <stdio.h>
#include <string.h>

int main()
{

float num_float = 1.75f;
double num_double = 12.85;
long double num_long_double = 353.123456789;


printf("\t float: %f\n", num_float);
printf("\t double: %lf\n", num_double);
printf("\t long double: %Lf\n", num_long_double);

num_float *=  2;
num_double /= 2;
num_long_double = num_long_double + 1;

printf("\t OPERACAO MATEMATICA\n");
printf("\t float: %f\n", num_float);
printf("\t double: %f \n", num_double);
printf("\t long double: %Lf\n", num_long_double);

return 0;
}

