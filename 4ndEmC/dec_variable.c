
#include <stdio.h>
#include <stdbool.h>

int main()
{

int numero = 0;
float salario = 0;
double consumo_total = 0;
bool sinal_ativado;

printf("\t (int):       'numero' possui:		%zu bytes\n", sizeof(numero));
printf("\t (float):     'salario' possui:		%zu bytes\n", sizeof(salario));
printf("\t (double):    'consumo_total' possui:	%zu bytes\n", sizeof(consumo_total));
printf("\t (bool):      'sinal_ativado possui:	%zu bytes\n", sizeof(sinal_ativado));

getchar();
return 0;
}
