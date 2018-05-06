// PerfomaceConsoleApp.c: Define o ponto de entrada para a aplicação de console.
//

#include <stdio.h>
#include <time.h>

void function_to_meansure(int loopValue);

int main(int argc, char *argv[])
{
	printf("Inicio do programa, para seguir presione qualquer tecla.\n");
	getchar();

	clock_t begin = clock();

	int loopValue = atoi(argv[1]);
	function_to_meansure(loopValue);

	clock_t end = clock();
	float time_h = end-begin;
	float elapsed_secs = time_h / CLOCKS_PER_SEC;

	printf("Este %c o resultado da performace do seu programa em segundos: %f", 233,elapsed_secs);
	printf("\nPresione qualquer tecla para sair.");
	getchar();

	return 0;
}

void function_to_meansure(int loopValue) {
	int stop = 0;

	for (int i = 0; i < loopValue;i++){
		for (int j = 0; j < loopValue;j++){
			if (stop == 0)
				stop = 1;
		}
	}
}

