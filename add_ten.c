#include <stdio.h>

int add_ten(int x);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int result = add_ten(x);
    printf("%d\n", result);
    return 0;
}

int add_ten(int x)
{
    return x + 10;
}
