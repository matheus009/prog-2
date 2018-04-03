#include<stdio.h>

int soma (int x, int y)

{	int total=0;
	if (x>=y)
	{
	return 0;
	}
	else
		{
		for (int i=x+1; i<y; i++)	
		total+=i;	
		return total;
		}	
}

int main()

{
	int x, y, resp;
	printf("Informe dois numeros:\n");
	scanf("%d %d", &x, &y);
	resp=soma(x, y);
	printf("\nTotal:%d", resp);
	
	return 0;
}
