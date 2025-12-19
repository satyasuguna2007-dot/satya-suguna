#include <stdio.h>
int main()
{
	char a;
	char word[20];
	char sen[2000];
	printf("enter single word");
	scanf("%c",&a);
	printf("enetr word");
	scanf("%s",&word);
	printf("enetr sen");
    scanf("%[^\n]",&sen);
	printf("\n the letter %c\n word is%s\n the sen is %s",a,word,sen);
	return 0;
	}
