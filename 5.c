#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define INT_MAX 2147483647

int main()
{
	int w=1;
	int wt[]={1};

	int n=sizeof(wt)/sizeof(wt[0]);


	int dp[10000 + 1][12 + 1];

	for (int i = 0; i < w + 1; i++) {
            for (int j = 0; j < n + 1; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = (i == 0) ? 0 : INT_MAX - 1;
                }
            }
        }
        
        for (int i = 1; i < w + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (wt[j - 1] > i) 
                    dp[i][j] =dp[i][j - 1];
                else 
                    dp[i][j] = min(dp[i][j - 1], 1 + dp[i - wt[j - 1]][j ]);
            }
        }

    printf("%d",dp[w][n]);
	return 0;
}