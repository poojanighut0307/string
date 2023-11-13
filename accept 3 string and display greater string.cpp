#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20],s3[20];
	int i,j,k;
	printf("enter first string = ");
	gets(s1);
	printf("enter second string = ");
	gets(s2);
	printf("enter third string = ");
	gets(s3);
	
	for(i=0; s1[i]!='\0'; i++);
	for(j=0; s2[j]!='\0'; j++);
	for(k=0; s3[k]!='\0'; k++);
	
	if(i>j && i>k)
		printf("\n first string is greater = %s",s1);
	else if(j>i && j>k)
		printf("\n second string is greater = %s",s2);
	else
		printf("\n third string is greater = %s",s3);
} 
