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
			printf("%3d", arr[i][j]);
		}
		arr[i][4] = Isum;
		printf("%3d", Isum);
		Isum = 0;
		puts("");
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			Jsum += arr[j][i];
		}
		printf("%3d", Jsum);
		Jsum = 0;
	}
}