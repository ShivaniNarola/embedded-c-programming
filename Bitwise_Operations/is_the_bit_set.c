/*
===============================================================================
Problem: Is the Bit Set
===============================================================================

Description:
Given an 8-bit register, check whether the bit at a specific position is
set (i.e., equal to 1).

Return:
- 1 if the specified bit is set.
- 0 if the specified bit is not set.

Bit positions use 0-based indexing:
- Position 0 = Least Significant Bit (LSB)
- Position 7 = Most Significant Bit (MSB)

Input:
- reg : 8-bit register value
- pos : bit position to check (0 to 7)

Output:
- 1 if the bit is set
- 0 otherwise

Example 1:
Input:
reg = 4      (00000100)
pos = 2

Output:
1

Example 2:
Input:
reg = 4      (00000100)
pos = 1

Output:
0

Approach:
1. Right shift the register by 'pos' positions.
2. Use bitwise AND with 1.
3. Return the result.

===============================================================================
*/

#include <stdio.h>
#include <stdint.h>

uint8_t is_bit_set(uint8_t reg, uint8_t pos)
{
    return (reg >> pos) & 1;
}

int main()
{
    uint8_t reg, pos;

    scanf("%hhu %hhu", &reg, &pos);

    printf("%u\n", is_bit_set(reg, pos));

    return 0;
}