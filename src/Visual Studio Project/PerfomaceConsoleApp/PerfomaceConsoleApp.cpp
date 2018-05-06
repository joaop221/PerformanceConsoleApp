// PerfomaceConsoleApp.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"

#include "locale"
#include "ctime"

void set_locale();

void function_to_meansure(int loopValue);

void main(int argc, char *argv[])
{
	set_locale();

	printf("Inicio do programa, para seguir presione qualquer tecla.\n");
	getchar();

	int loopValue = atoi(argv[1]);

	clock_t begin = clock();

	function_to_meansure(loopValue);

	clock_t end = clock();
	float elapsed_secs = float(end - begin) / CLOCKS_PER_SEC;

	printf("Este %c o resultado da performace do seu programa em segundos: %f", 233,elapsed_secs);
	printf("\nPresione qualquer tecla para sair.");
	getchar();
}

void set_locale() {
	setlocale(LC_ALL, "");
}

void function_to_meansure(int loopValue) {
	bool stop = false;

	for (int i = 0; i < loopValue; i++) {
		for (int j = 0; j < loopValue; j++) {
			if (stop == false)
				stop = true;
		}
	}
}

