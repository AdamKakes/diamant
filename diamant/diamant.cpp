#include<stdio.h>

int main() 
{
	int opakovani, b = 1;
	for (int j = 9; j >= 1; j--)
	{
		int opakovani = 10;
		for (int i = 1; i < j; i++)
		{
			opakovani--;
			printf("   ");
		}
		for (int a = 8; a >= j; a--)
		{
			opakovani--;
			printf("%2d ", opakovani);
		}
		for (int i = 1; i <= b; i++)
		{
			printf("%2d ", i);
		}
		printf("\n");
		b++;
	}
	b = 8;
	for (int j = 8; j >= 1; j--)
	{
		int opakovani = 10;
		for (int i = 8; i >= j; i--)
		{
			opakovani--;
			printf("   ");
		}
		for (int a = 1; a <= j; a++)
		{
			opakovani--;
			printf("%2d ", opakovani);
		}
		for (int i = 2; i <= b; i++)
		{
			printf("%2d ", i);
		}
		printf("\n");
		b--;
	}
}