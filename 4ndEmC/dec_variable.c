
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

int numero = 10;                printf("\t valor da variavel: %d\n", numero);
float salario = 5000.81;        printf("\t valor da variavel: %.2f\n", salario);
double consumo_total = 4014.90; printf("\t valor da variavel: %.2lf\n", consumo_total);
bool sinal_ativado = 1;         printf("\t valor da variavel: %d\n", sinal_ativado);
char letra = 'O';               printf("\t valor da variavel: %c\n", letra);
char string[] = "Ronaldo CR7";  printf("\t valor da variavel: %s\n\n", string);

printf("\t\t (int):     'numero' possui:        %zu bytes\n", sizeof(numero));
printf("\t\t (float):   'salario' possui:       %zu bytes\n", sizeof(salario));
printf("\t\t (double):  'consumo_total' possui: %zu bytes\n", sizeof(consumo_total));
printf("\t\t (bool):    'sinal_ativado' possui: %zu bytes\n", sizeof(sinal_ativado));
printf("\t\t (char):    'letra' possui:         %zu bytes\n", sizeof(letra));
printf("\t\t (string):  'string' possui:        %zu bytes\n\n", sizeof(string));

numero  = 25;                  printf("\t Novo valor da variavel: %d\n", numero);
salario = 1010.10;             printf("\t Novo valor da variavel: %.2f\n", salario);
consumo_total = 5050.507;      printf("\t Novo valor da variavel: %.2lf\n", consumo_total);
sinal_ativado = 0;             printf("\t Novo valor da variavel: %d\n", sinal_ativado);
letra = 'T';                   printf("\t Novo valor da variavel: %c\n", letra);
strcpy(string, "Messi M10");   printf("\t Novo valor da variavel: %s\n\n", string);

getchar();

return 0;

}

