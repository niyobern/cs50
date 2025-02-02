#include <stdio.h>

int binary_to_decimal(int binary);
int decimal_to_hex(int decimal);
int binary_to_Hex(int binary);

int main()
{
    int result = binary_to_Hex(111000110);
    printf("%d\n", result);
    return 0;
}


int binary_to_Hex(int binary)
{
    // we convert to decimal then from decimal to hex
    int decimal = binary_to_decimal(binary);
    int hex = decimal_to_hex(decimal);
    return hex;
}

int binary_to_decimal(int binary)
{
    int decimal = 0;
    int power = 1;
    while (binary > 0)
    {
        decimal += (binary % 10) * power;
        power *= 2;
        binary /= 10;
    }
    return decimal;
}

int decimal_to_hex(int decimal)
{
    int hex = 0;
    int power = 1;
    while (decimal > 0)
    {
        hex += (decimal % 16) * power;
        power *= 16;
        decimal /= 16;
    }
    return hex;
}