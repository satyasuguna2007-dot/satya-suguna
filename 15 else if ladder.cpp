#include <stdio.h>
int main()
{
	char roll[20],name[20];
	int S1,S2,S3,total,avg;
	printf(" enter roll and name");
	scanf("%s%s",&roll,&name);
	printf("enter S1,S2,S3 marks");
	scanf("%d%d%d",&S1,&S2,&S3);
	total=S1+S2+S3;
	avg=total/3;
	printf("\n roll:%s",roll);
	printf("\n name:%s",name);
	if(S1<40||S2<40||S3<40)
	{
		printf("\n fail");
	}
	else if (avg>70)
{
	printf("| distinction");
}
else if (avg>60)
{
	printf("\n pass");
}
return 0;
}
