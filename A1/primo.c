#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    int i = sqrt(n);
    int divisor = 0;

    while(i > 1)
    {
        if(n % i == 0)
        {
            if(divisor > i || divisor == 0)
            {
                divisor = i;
            }
        }
        i--;
    }

    printf("%d", divisor);
}