/*
===============================================================================
Problem: Clear the Bit in an 8-bit Register
===============================================================================

Description:
You are working with an 8-bit control register. Write a function to clear
(set to 0) the bit at a given position without affecting other bits.

Bit positions use 0-based indexing:
- Position 0 = Least Significant Bit (LSB)
- Position 7 = Most Significant Bit (MSB)

Input:
- reg : 8-bit register value
- pos : bit position to clear (0 to 7)

Output:
- Updated register value after clearing the specified bit.

Example 1:
Input:
reg = 7      (00000111)
pos = 0

Output:
6            (00000110)

Example 2:
Input:
reg = 15     (00001111)
pos = 3

Output:
7            (00000111)

Approach:
1. Create a mask using (1 << pos).
2. Invert the mask using ~.
3. Use bitwise AND (&) to clear the selected bit.
4. Return the updated register value.

===============================================================================
*/

#include <stdio.h>
#include <stdint.h>

uint8_t clear_bit(uint8_t reg, uint8_t pos)
{
    reg &= ~(1 << pos);
    return reg;
}

int main()
{
    uint8_t reg, pos;

    scanf("%hhu %hhu", &reg, &pos);

    uint8_t result = clear_bit(reg, pos);

    printf("%u\n", result);

    return 0;
}