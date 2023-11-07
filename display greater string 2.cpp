#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i,j;
	printf("enter first string = ");
	gets(s1);
	printf("\n enter second string = ");
	gets(s2);
	
	for(i=0; s1[i]!='\0'; i++);
	for(j=0; s2[j]!='\0'; j++);
	
	if(i>j)
		printf("\n first string is greater = %s ",s1);
	else
		printf("\n second string is greater = %s",s2);
}
