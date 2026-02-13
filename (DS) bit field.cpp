 #include<stdio.h>
 struct student
{
	int first :2;
	int second:3;
};
int main()
{
	struct student s1;
	s1.first=3;
	s1.second=7;
	printf("\n first value=%d",s1.first);
	printf("\n second value=%d,s1.second");
	return 0;
	}
