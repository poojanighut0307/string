#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20] ;
	int i ;
	printf("enter first name=");
	gets(s1);
	
	printf("\n vowels=");
	for(i=0 ; s1[i]!='\0'; i++)
	{
		if(s1[i]=='a'|| s1[i]=='e'|| s1[i]=='i'|| s1[i]=='o'|| s1[i]=='u')

		printf("%c ",s1[i]);
	}
}
