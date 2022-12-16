#pragma once

const int M = 6;
const int N = 9;

void cringe_task()
{
	int mat[M][N] = { 0 };

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			mat[i][j] = 10 * (i + 1);
		}
	}

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
}