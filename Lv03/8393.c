#include <stdio.h>

int main(void)
{
    int n;
    int result = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    
    printf("%d\n", result);

    return 0;
}