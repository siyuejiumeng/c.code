#include<stdio.h>/*星号的图形*/
int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(j=i;j<7;j++)
		printf(" ");
		for(k=1;k<=2*i-1;k++)
		printf("*");
		printf("\n");
	}
}
