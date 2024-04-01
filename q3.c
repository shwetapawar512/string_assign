#include<stdio.h>
void main()
{
	char s[20];
	int ls,i,j;

	printf("enter a string:\n");
	scanf("%[^\n]",s);
	
	for(ls=0;s[ls];ls++);
	i=0;j=ls-1;
	while(s[i]==s[j] && i<j)
	{
		i++;
		j--;
	}
	if(s[i]==s[j])
		printf("String is palindrome\n");
	else
		printf("String is not palindrome\n");
		
}
