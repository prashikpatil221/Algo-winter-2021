#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define INT_MAX 2147483647


int main()
{
    int s[]={};
    int h[]={};

    int n=sizeof(s)/sizeof(s[0]);
    int m=sizeof(h)/sizeof(h[0]);

    int dp[n+1][m+1];
    
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0 )
                dp[i][j]=0;
        }
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(j<i)
                dp[i][j]=INT_MAX;
            else
                dp[i][j]=mini(dp[i][j-1],dp[i-1,j-1]+abs(h[j]-s[i]));
        }
    }

    printf("%d",dp[n][m]);
    
    return 0;
}