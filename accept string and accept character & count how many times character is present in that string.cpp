#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],ch;
	int i,c1=0;
	printf("enter string = ");
	gets(s1);
	printf("\n enter character = ");
	scanf("%c",&ch);
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]==ch)
			c1++;
	}
	printf("\n character count = %d",c1);
}
