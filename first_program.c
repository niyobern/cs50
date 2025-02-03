#include <stdio.h>

int binary_to_decimal(long binary);
char* binary_to_Hex(long binary);
char* decimal_to_hex(int decimal);

int main()
{
    char* result = binary_to_Hex(100000011110);
    printf("%s\n", result);
    return 0;
}


char* binary_to_Hex(long binary)
{
    // we convert to decimal then from decimal to hex
    int decimal = binary_to_decimal(binary);
    char* hex = decimal_to_hex(decimal);
    return hex;
}

int binary_to_decimal(long binary)
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

char* decimal_to_hex(int decimal) 
{
    // Static buffer to store hex string (static so it persists after function returns)
    static char hex_string[100];
    
    // If decimal is 0, return "0"
    if (decimal == 0) {
        hex_string[0] = '0';
        hex_string[1] = '\0';
        return hex_string;
    }
    
    // Array to store hex digits
    char hex[100];
    int i = 0;
    
    // Convert decimal to hex
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hex[i] = remainder + '0';    // 0-9
        else
            hex[i] = remainder + 'A' - 10;   // A-F
        i++;
        decimal /= 16;
    }
    
    // Copy digits to result string in reverse order
    int j;
    for (j = 0; j < i; j++) {
        hex_string[j] = hex[i - 1 - j];
    }
    hex_string[j] = '\0';  // Add null terminator
    
    return hex_string;
}