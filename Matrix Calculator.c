/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdlib.h>

int main()
{
	printf("Matrix Calculator\n");
	
	printf("Enter Values for Matrix A:\n");
	
	int matrixA[2][2];

	for (int k = 0; k < 2; ++k)
		for (int l = 0; l < 2; ++l)
			scanf("%d", &matrixA[k][l]);


	printf("Enter Values for Matrix B:\n");

	int matrixB[2][2];

	for (int k = 0; k < 2; ++k)
		for (int l = 0; l < 2; ++l)
			scanf("%d", &matrixB[k][l]);

	printf("\n");
	printf("Addition\n");
	for (int k = 0; k < 2; ++k)
	{
		for (int l = 0; l < 2; ++l)
			printf("%d\t", matrixA[k][l] + matrixB[k][l]);
		printf("\n");
	}

	printf("Substraction\n");
	for (int k = 0; k < 2; ++k)
	{
		for (int l = 0; l < 2; ++l)
			printf("%d\t", matrixA[k][l] - matrixB[k][l]);
		printf("\n");
	}

	int result[2][2];

	for (int k = 0; k < 2; k++)
		for (int l = 0; l < 2; l++)
		{
			result[k][l] = 0;
			for (int k = 0; k < 2; k++)
				result[k][l] += matrixA[k][l] * matrixB[k][l];
		}

	printf("Multiplication\n");
	for (int k = 0; k < 2; ++k)
	{
		for (int l = 0; l < 2; ++l)
			printf("%d\t", result[k][l]);
		printf("\n");
	}

	for (int k = 0; k < 2; k++)
	{
		for (int l = 0; l < 2; l++)
		{
			result[k][l] = 0;
			for (int k = 0; k < 2; k++)
				result[k][l] += matrixA[k][l] / matrixB[k][l];
		}
	}

	printf("Division\n");
	for (int k = 0; k < 2; ++k)
	{
		for (int l = 0; l < 2; ++l)
			printf("%d\t", result[k][l]);
		printf("\n");
	}

	system("pause>nil");
	return 0;
}


