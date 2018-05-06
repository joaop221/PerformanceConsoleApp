// PerfomaceConsoleApp.cpp: Define o ponto de entrada para a aplicação de console.
//

#include <iostream>
#include <time>

using namespace std;

void function_to_meansure(int loopValue);

int main(int argc, char *argv[])
{
	cout << "Inicio do programa, para seguir presione qualquer tecla." << endl; 
	cin.ignore();
	
	int loopValue = atoi(argv[1]);

	clock_t begin = clock();

	function_to_meansure(loopValue);

	clock_t end = clock();
	float time_h = end-begin;
	float elapsed_secs = time_h / CLOCKS_PER_SEC;

	cout << "Este e o resultado da performace do seu programa em segundos: " << elapsed_secs << endl; 
	cout << "Presione qualquer tecla para sair." << endl; 
	cin.ignore();

	return 0;
}

void function_to_meansure(int loopValue) {
	bool stop = false;

	for (int i = 0; i < loopValue;i++){
		for (int j = 0; j < loopValue;j++){
			if (stop == false)
				stop = true;
		}
	}
}

