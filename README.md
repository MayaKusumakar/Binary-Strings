# Binary-Strings
## Problem
A binary string is a string made up of 0's and 1's.

This program takes a binary string that also contains X's and prints out all possible binary strings where the X's can be replaced with either 0's or 1's.

## Specifications
- The binary string will be passed to the program through the command line
- The X's in the binary string may be either lower or upper case
## Assumptions
Input will always be valid

## Valid Input
  - The Binary String: A string made up of 0's, 1's, and X's
  - This value will be passed as the first command line parameter

# Examples
## Example 1
./bin_str.out 0101

0101

## Example 2
./bin_str.out xx

00

01

10

11

## Example 3
./bin_str.out 1x0X

1000

1001

1100

1101
