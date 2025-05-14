#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");

printf("\t TABULAÇÃO\n");
printf("\n\n PULA LINHA\n\n");
printf("\'COLOCANDO ASPAS SIMPLES/APOSTÓFRO'\n");
printf("\"ASPAS DUPLAS\"\n");
printf("/BARRA INVERTIDA/n");

getchar();

return 0;
}

