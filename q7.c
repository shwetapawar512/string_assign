#include<stdio.h>
void main()
{
	char s[20];
	int i,j,k,c,flag;

	printf("Enter a string:\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		for(k=i-1,flag=0;k>=0;k--)
		{
			if(s[i]==s[k])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(j=i+1,c=1;s[j];j++)
			{
				if(s[i]==s[j])
					c++;
			}
			if(c>=2)
			printf("%c--->%d times\n",s[i],c);
		}
	}
}	
