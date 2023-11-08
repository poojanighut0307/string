#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i;
	printf("enter string = ");
	gets(s1);
	for(i=0; s1[i]!='\0'; i++);
	
	printf("\n first character = %c",s1[0]);
	printf("\n last character = %c",s1[i-1]);
}
