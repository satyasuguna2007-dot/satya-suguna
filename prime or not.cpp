#include <stdio.h>
int main()
{
int n,count=0;
printf("\n enter n valu");
scanf("%d",&n);
for(int a=1;a<=n;a++)
{
if(n%a==0)
{
count++;
}
}
if(count==2)
{
printf("\n prime number");
}
else
{
	printf("\n is not a prime number");
}
return 0;
}
