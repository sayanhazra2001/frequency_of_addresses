#include<stdio.h>
void fre(char *,int);
int main()
{
	char str[20];
	int n,c,i;
	printf("enter a string:\n");
	scanf("%s",str);
	if(str[c]!='\0')
		c++;
	fre(str,c);
	return 0;
}
void fre(char *str,int c)
{
	int i,n,f,j;
	char p=0;
	for(i=0;i<=c;i++)
	{
		p=str[i];
		f=0;
		n=1;
		for(j=i-1;j>=0;j--)
		{
			if(p==str[i])
			{
				f=1;
				break;
			}//printf("&");
		}
		if(f==0)
		{
			for(j=i+1;j<n;j++)
				if(p==str[j])
					n++;
			printf("%c -----------> %d",p,n);
		}
		printf("*");
	}
}
