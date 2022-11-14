// 2022_11_13_MatricesDinamicas.cpp 
// Fernando Patiño
// 
//

#include <iostream>

int main()
{
	int matriz[2][3];

	for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
	{
		for (int j = 0;  j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
		{
			std::cout << "Ingresa un digito en la posicion [" << i << "]" << "[" << j << "] " << std::endl;
			std::cin >> matriz[i][j];
		}
	}

	
	for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++) {
		for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
		{
			std::cout <<"Posicion [" <<i <<"]"<< "["<<j<<"] " << matriz[i][j] << " ";
		}
		std::cout << std::endl;

	}

	int filas = 0, columnas = 0, random = 0;

	std::cout << "Ingresa el numero de filas" << std::endl;

	std::cin >> filas;

	std::cout << "Ingresa el numero de columnas" << std::endl;

	std::cin >> columnas;

	srand(time(0));

	int** matrix = new int* [filas];
	for (int i = 0; i < filas; ++i)
		matrix[i] = new int[columnas];;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}




