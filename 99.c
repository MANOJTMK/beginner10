#include <stdio.h>
 
int main(void) 
{
	int a,b,c,mod;
	scanf("\n%d %d %d",&a,&b,&c);
	mod=((a*b)%c);
	printf("\n%d",mod);
	return 0;
}
