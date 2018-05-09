#include<stdio.h>
int main()
{
    int a = 5, b = 0;

    while (a > b)
    {
        printf("a = %d b= %d \n", a, b);
        a--;
        b++;
    }
    return 0;
}
