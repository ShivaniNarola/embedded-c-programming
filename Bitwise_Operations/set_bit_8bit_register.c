/*
===============================================================================
Problem: Set the Bit in an 8-bit Register
===============================================================================

Description:
You are working with an 8-bit control register. Write a function to set
the bit at a given position without affecting any other bits.

Bit positions use 0-based indexing:
- Position 0 = Least Significant Bit (LSB)
- Position 7 = Most Significant Bit (MSB)

Input:
- reg : 8-bit register value
- pos : bit position to set (0 to 7)

Output:
- Updated register value after setting the specified bit.

Example 1:
Input:
reg = 5      (00000101)
pos = 1

Output:
7            (00000111)

Example 2:
Input:
reg = 8      (00001000)
pos = 0

Output:
9            (00001001)

Approach:
1. Create a mask using (1 << pos).
2. Use bitwise OR (|) to set the selected bit.
3. Return the updated register value.

===============================================================================
*/

#include <stdio.h>
#include <stdint.h>

uint8_t set_bit(uint8_t reg, uint8_t pos)
{
    reg |= (1 << pos);
    return reg;
}

int main()
{
    uint8_t reg, pos;

    scanf("%hhu %hhu", &reg, &pos);

    uint8_t result = set_bit(reg, pos);

    printf("%u\n", result);

    return 0;
}