#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i,c1=0,c2=0;
	printf("enter first string = ");
	gets(s1);
	printf("\n enter second string = ");
	gets(s2);
	for(i=0; s1[i]!='\0'; i++)
	{
		c1++;
	}
	for(i=0; s2[i]!='\0'; i++)
	{
		c2++;
	}
	if(c1>c2)
		printf("\n first string is greater = %s ",s1);
	else
		printf("\n second string is greater = %s",s2);
}
