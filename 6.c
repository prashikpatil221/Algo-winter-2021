#include<stdio.h>
#include<string.h>
 

int main()
{

    int m=1;
    int n=2;
    int x=3;

    int table[n + 1][x + 1];
    memset(table, 0, sizeof(table));
 
    for (int j = 1; j <= m && j <= x; j++)
        table[1][j] = 1;
 
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= m && k < j; k++)
                table[i][j] += table[i-1][j-k];
 
    /* 
    for (int i = 0; i <= n; i++)
    {
      for (int j = 0; j <= x; j++)
        cout << table[i][j] << " ";
      cout << endl;
    } 
    */

    printf("%d",table[n][x]);    
   
    return 0;
}