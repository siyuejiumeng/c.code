#include<stdio.h>//��ƽ���֣�ȥ����߷ֺ���ͷ�
int main()
{
	int i,a[10],sum=0,max,min;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=min=a[0];
	for(i=0;i<10;i++)
	{
		sum+=a[i];
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("%-6f",(sum-min-max)/8.0);
}