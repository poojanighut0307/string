#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i;
	printf("enter string = ");
	gets(s1);
	for(i=0; s1[i]!='\0'; i++);
	
	printf("\n reverse string = ");
	for(i=i-1; i>=0; i--)
	{
		printf("%c",s1[i]);
	}
}
