# CS50 Practice Projects

This repository contains practice projects from Programming with C course from Adventist University of Central Africa.

## Number System Converter

### Description
A C program that converts between different number systems:
- Binary to Decimal
- Binary to Hexadecimal
- Decimal to Hexadecimal
- and finaly, Binary to Hexadecimal

### Functions

- `binary_to_decimal(long binary)`: Converts a binary number to decimal
- `binary_to_Hex(long binary)`: Converts a binary number to hexadecimal
- `decimal_to_hex(int decimal)`: Converts a decimal number to hexadecimal

### Usage Example

```c
int main() {
    long binary = 100000011110;
    char* hex = binary_to_Hex(binary);
    printf("Binary: %ld, Hexadecimal: %s\n", binary, hex);
    return 0;
}
```

### How to Compile and Run
1. Make sure you have a C compiler installed (like gcc)
2. Navigate to the project directory
3. Compile the program:
   ```bash
   gcc first_program.c -o converter
   ```
4. Run the program:
   ```bash
   ./converter
   ```

## Contributing
Feel free to submit issues and enhancement requests!

## License
This project is provided as is.
