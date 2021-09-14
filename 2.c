#include<stdio.h>
#include<string.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int main()
{

	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int dp[n+1];

	dp[0]=arr[0];
	dp[1]=max(arr[0],arr[1]);

	for(int i=2;i<n;i++)
	{
		dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
	}

	printf("%d",dp[n-1]);


	return 0;
}