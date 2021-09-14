#include<stdio.h>
#include<string.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int main()
{

	char s1[]="abcde";
	char s2[]="abdef";

	int l1=strlen(s1);
	int l2=strlen(s2);
	int result=0;

	int dp[l1+1][l2+1];

	for(int i=0;i<l1+1;i++)
	{
		for(int j=0;j<l2+1;j++)
		{
			if(i==0|| j==0)
				dp[i][j]=0;
		}
	}

	for(int i=0;i<l1+1;i++)
	{
		for(int j=0;j<l2+1;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
				result=max(result,dp[i][j]);
			}
			else{
				dp[i][j]=0;
			}
		}
	}

	printf("%d",result);



	return 0;
}