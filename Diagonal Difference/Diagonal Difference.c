#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(i=0,j=0;i<n,j<n;i++,j++)
        sum1 = sum1+a[i][j];
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
        sum2 = sum2 +a[i][j];
    printf("%d",abs(sum2-sum1));
    return 0;
}
