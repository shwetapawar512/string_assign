#include<stdio.h>
void main()
{
	char s[20];
	int i,j,k;

	printf("Enter a string:\n");
	scanf("%[^\n]",s);

	printf("Before: %s\n",s);

	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==' ' && s[i+1]==' ')
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
		}
	}
	printf("%s\n",s);	

}
