#include "Task1004.h"
#include <iostream>

void cringe_task()
{
	int mat[M][N] = {0};

	// заполнение матрицы
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			mat[i][j] = 10 * (i + 1);
		}
	}

	// вывод на экран
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
}