#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i;
	printf("enter string = ");
	gets(s1);
	printf("\n output = ");
	for(i=0; s1[i]!='\0'; i++)
	{
		if(i%2==0)
		printf("%c",s1[i]);
	}
}
