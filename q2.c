#include<stdio.h>
void main()
{
	char s[20];
	int i,k,c;

	printf("Enter a string:\n");
	scanf("%[^\n]",s);

	for(i=0,c=0;s[i];i++)
	{
		for(k=i-1;k>=0;k--)
		{
			if(s[i]==s[k])
				i++;
		}
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			c++;
	}
	printf("count of vowels: %d\n",c);




}
