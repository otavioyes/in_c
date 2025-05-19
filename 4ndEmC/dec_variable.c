
#include <stdio.h>
#include <stdbool.h>

int main()
{

int numero = 10;                printf("\t valor da variavel: %d\n", numero);
float salario = 5000.85;        printf("\t valor da variavel: %.2f\n", salario);
double consumo_total = 4014.90; printf("\t valor da variavel: %.2f\n", consumo_total);
bool sinal_ativado = 1;         printf("\t valor da variavel: %d\n\n", sinal_ativado);

printf("\t\t (int):       'numero' possui:		%zu bytes\n", sizeof(numero));
printf("\t\t (float):     'salario' possui:		%zu bytes\n", sizeof(salario));
printf("\t\t (double):    'consumo_total' possui:	%zu bytes\n", sizeof(consumo_total));
printf("\t\t (bool):      'sinal_ativado possui:	%zu bytes\n\n", sizeof(sinal_ativado));

numero  = 25;               printf("\t Novo valor da variavel: %d\n", numero);
salario = 1010.10;          printf("\t Novo valor da variavel: %.2f\n", salario);
consumo_total = 5050.50;    printf("\t Novo valor da variavel: %.2f\n", consumo_total);
sinal_ativado = 0;          printf("\t Novo valor da variavel: %d\n", sinal_ativado);

getchar();
return 0;
}
