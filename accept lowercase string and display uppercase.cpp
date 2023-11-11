#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i;
	printf("enter string in lowercase = ");
	gets(s1);
	printf("\n uppercase string = ");
	for(i=0; s1[i]!='\0'; i++)
	{
		printf("%c",s1[i]-32);
	}
}
