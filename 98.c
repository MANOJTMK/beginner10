#include <stdio.h>
 
int main(void) 
{
	int n,array[30],i;
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=array[i])
		{
			printf("\n%d",i);
			break;
		}
	}
 
	return 0;
}
