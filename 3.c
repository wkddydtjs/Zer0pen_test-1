#include<stdio.h>
int main()
{
	int arr[5][5] = { 0 };
	int i, j;
	int Isum = 0;
	int Jsum = 0;
	for (i = 0; i <4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j + 1;
			Isum += arr[i][j];
		}
		arr[i][4] = Isum;
		Isum = 0;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			Jsum += arr[j][i];
		}
		arr[4][i] = Jsum;
		Jsum = 0;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%4d", arr[i][j]);
		}
		puts("");
	}
}