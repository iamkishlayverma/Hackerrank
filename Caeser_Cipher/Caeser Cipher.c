#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,d,z,a1;
    scanf("%d",&n);
    char a[n];
    for(i = 0;i <= n;i++)
    {
        scanf("%c",&a[i]);
    }
    scanf("%d",&k);
    for(i = 1;i <= n;i++)
    {
        d  = a[i];
        if((d >= 65 && d <= 90) || (d >= 97 && d <= 122))
        {
            if((d >= 65 && d <= 90) && (d+k) > 90)
            {
                z = k % 26;
                if(d + z > 90)
                {
                    a1 = (d + z) - 90;
                    d = 64;
                    printf("%c",(d+a1));
                }
                else
                {
                    printf("%c",(d + z));
                }
            }
            else if((d >= 97 && d <= 122) && (d+k) > 122)
            {
                z = k % 26;
                if(d + z >122)
                {
                    a1 = (d + z) - 122;
                    d = 96;
                    printf("%c",(d+a1));
                }
                else
                {
                    printf("%c",(d + z));
                }
            }
            else
            {
                printf("%c",(d+k));
            }
        }
        else
        {
            printf("%c",d);
        }

    }
}
