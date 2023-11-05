#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20] ;
	int i ,n=0;
	printf("enter first name=");
	gets(s1);
	for(i=0; s1[i]!='\0'; i++)
	{
		n++;
	}
	printf("length string = %d",n);
}
