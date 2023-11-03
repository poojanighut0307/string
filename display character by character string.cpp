#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i;
	printf("enter name = ");
	gets(s1);
	printf("\n name ");
	for(i=0; s1[i]!='\0'; i++)
	{
		printf("%c\t",s1[i]);
	}
}
