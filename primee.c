#include <stdio.h>
int checkPrimeNumber(int n);
int main()
{
    int n1, n2, i, flag;
    scanf("%d %d", &n1, &n2);
    for(i=n1+1; i<n2; ++i)
    {
        flag = checkPrimeNumber(i);
        if(flag == 1)
            printf("%d ",i);
    }
    return 0;
}
int checkPrimeNumber(int n)
{
    int j, flag = 1;
    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
