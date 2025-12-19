#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	printf("***** bitwise operations*****");
	printf("\n using bitwise operator on %d&%d:%4d",a,b,a/b);
	printf("\n using bitwise opreator on %d|%d:%4d",a,b,a|b);
	printf("\n using bitwise operator on %d^%d:%4d",a,b,a^b);
	printf("\n using bitwise operator left shift on %d<<%d",a,b,a<<b);
	printf("\n using bitwise operator right shift on %d>>%d:%&d",a,b,a>>b);
	printf("\n using bitwise operator(~):%4d",~a);
	return 0;
}
