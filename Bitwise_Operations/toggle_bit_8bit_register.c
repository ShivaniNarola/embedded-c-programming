/*
===============================================================================
Problem: Toggle the Bit in an 8-bit Register
===============================================================================

Description:
In firmware, toggling a bit means inverting its current value:
- If the bit is 1, it becomes 0.
- If the bit is 0, it becomes 1.

Write a function to toggle a specific bit in an 8-bit register without
affecting any other bits.

Bit positions use 0-based indexing:
- Position 0 = Least Significant Bit (LSB)
- Position 7 = Most Significant Bit (MSB)

Input:
- reg : 8-bit register value
- pos : bit position to toggle (0 to 7)

Output:
- Updated register value after toggling the specified bit.

Example 1:
Input:
reg = 6      (00000110)
pos = 1

Output:
4            (00000100)

Example 2:
Input:
reg = 0      (00000000)
pos = 3

Output:
8            (00001000)

Example 3:
Input:
reg = 15     (00001111)
pos = 3

Output:
7            (00000111)

Approach:
1. Create a mask using (1 << pos).
2. Use bitwise XOR (^) to toggle the selected bit.
3. Return the updated register value.

===============================================================================
*/

#include <stdio.h>
#include <stdint.h>

uint8_t toggle_bit(uint8_t reg, uint8_t pos)
{
    reg ^= (1 << pos);
    return reg;
}

int main()
{
    uint8_t reg, pos;

    scanf("%hhu %hhu", &reg, &pos);

    uint8_t result = toggle_bit(reg, pos);

    printf("%u\n", result);

    return 0;
}