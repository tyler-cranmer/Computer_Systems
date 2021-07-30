/* Tyler Cranmer 
   gecr2427
 * CS:APP Data Lab 
 * 
 * <Please put your name and userid here>
 * 
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function. 
     The max operator count is checked by dlc. Note that '=' is not 
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
/* We do not support C11 <threads.h>.  */
/* 
 * bitOr - x|y using only ~ and & 
 *   Example: bitOr(6, 5) = 7
 *   Legal ops: ~ &
 *   Max ops: 8
 *   Rating: 1
 */
int bitOr(int x, int y) {
  return ~(~x&~y);
}
/* 
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void) {
    
int even_bits = 0x55; //0101 0101
even_bits = even_bits | even_bits << 8; //shifts over to create 0101 0101 0000 0000 uses or operator to creates 0101 0101 0101 0101
return even_bits | even_bits << 16; // shifts over to create 0101 0101 0101 0101 0000 0000 0000 0000 , uses OR operator to create all 0101. 
  
}
/* 
 * minusOne - return a value of -1 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 *   Rating: 1
 */
int minusOne(void) {
/*
    ~0000 --> 1111
*/  
  int neg_num = 0x0;
  return ~neg_num;
}
/* 
 * allEvenBits - return 1 if all even-numbered bits in word set to 1
 *   Examples allEvenBits(0xFFFFFFFE) = 0, allEvenBits(0x55555555) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */


int allEvenBits(int x) {
int odd_bits = 0xAA;     // 1010 1010
odd_bits = odd_bits | 0xAA << 8; // creates 1010 1010 1010 1010
odd_bits = odd_bits | odd_bits << 16; // creates 1010 1010 1010 1010 1010 1010 1010 1010
return !~(x|odd_bits); 
                        /*
                            x = 0101 | 1010 
                              = 1111
                            
                            ~(1111) = (0000)
                            !(0000) = 1
                        */
}
/* 
 * anyOddBit - return 1 if any odd-numbered bit in word set to 1
 *   Examples anyOddBit(0x5) = 0, anyOddBit(0x7) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */


int anyOddBit(int x) { 
    int temp; 
    int odd_bits = 0xAA;     // 1010 1010
    odd_bits = odd_bits | 0xAA << 8; // creates 1010 1010 1010 1010
    odd_bits = odd_bits | odd_bits << 16; // creates 1010 1010 1010 1010 1010 1010 1010 1010
    temp = x & odd_bits; // creates all 0000
    temp = !!temp;      // first bang -> 1, second bang --> 0
    return temp;
}
/* 
 * byteSwap - swaps the nth byte and the mth byte
 *  Examples: byteSwap(0x12345678, 1, 3) = 0x56341278
 *            byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD
 *  You may assume that 0 <= n <= 3, 0 <= m <= 3
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 25
 *  Rating: 2
 */
int byteSwap(int x, int n, int m) {
    int n_bits = n << 3; //n*8
    int m_bits = m << 3; //m*8
    int nn = 0;
    int zero = 0;
    int mm = 0;
    
    zero = x & ~(0xff << n_bits | 0xff << m_bits); // de00be00 and 00340078
    mm = (x >> n_bits & 0xff);                    //  000000ef and 00000056               
    mm = mm << m_bits;   // shift bits by n,m factor 00ef0000 and 56000000
    nn = x >> m_bits & (0xff);                   // 000000ad and 00000012
    nn = nn << n_bits;                            //000000ad and 00001200

    return zero|mm|nn;                      /* de00be00 and 00340078
                                               00ef0000 and 56000000
                                               000000ad and 00001200
                                               deefbead and 56341278
                                            */
    
}
/* 
 * addOK - Determine if can compute x+y without overflow
 *   Example: addOK(0x80000000,0x80000000) = 0,
 *            addOK(0x80000000,0x70000000) = 1, 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3
 */
int addOK(int x, int y) {
    int s = (x + y) >> 31 & 0x1; //extract the sign bit from the sum
    x = x >> 31 & 0x1;           // extract the sign bit from x
    y = y >> 31 & 0x1;           // extract sign bit from y   
    return (!((x^s) & (y^s))); 

                                    /*
                                        if both x and y have the same sign and the sum's sign is opposite
                                        thier value = 1/true else be false
                                        bang the results to switch signs.
                                        
                                    */
}


/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
int a = !!x; //conditional statement, if num true = 1 else, 0.
int b = ~a + 1; //2s compliment negation. inverse the bits and add 1. create either all 1s or all 0s depending on a. 
return (b & y) | (~b&z); //(x&y) | (~x&z)  
                                            /* 2       5 
                                              1111&  0000&
                                              0100   0101
                                              0100 | 0000
                                                  0100
                                            */
}


/* 
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
    
int first_digit = (x >> 4) ^ 0x3; //checks first digit is 3. if true, xor zeros out first digit.
int second_digit = ((0x0f & x) + 0x6) & 0xf0; //checks if the second digit is b/w 0-9 if true, zeros out if true.
return !(first_digit | second_digit); // if both digits come back 0 -> 0!
                                    /*
                                      x0f 0000 1111&
                                      x3a 0011 1010
                                          0000 1010+
                                       x6      0110
                                          0001 0000&
                                          1111 0000
                                          0001 0000 <-- or w/ first digit.
                                          
                                          */
    
}


/* 
 * replaceByte(x,n,c) - Replace byte n in x with c
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: replaceByte(0x12345678,1,0xab) = 0x1234ab78
 *   You can assume 0 <= n <= 3 and 0 <= c <= 255
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 3
 */
int replaceByte(int x, int n, int c) {
    int n_bits = n << 3;             //shift n * 8 bits
    int zero = x & ~(0xff << n_bits);  //zero out n bits
    int c_bits = c << n_bits;          //shift c << to the nth bit 
    return zero | c_bits;              /*
                                        12340078or
                                        0000ab00
                                        1234ab78
                                       */
}
/* reverseBits - reverse the bits in a 32-bit integer,
              i.e. b0 swaps with b31, b1 with b30, etc
 *  Examples: reverseBits(0x11111111) = 0x88888888
 *            reverseBits(0xdeadbeef) = 0xf77db57b
 *            reverseBits(0x88888888) = 0x11111111
 *            reverseBits(0)  = 0
 *            reverseBits(-1) = -1
 *            reverseBits(0x9) = 0x90000000
 *  Legal ops: ! ~ & ^ | + << >> and unsigned int type
 *  Max ops: 90
 *  Rating: 4
 */
int reverseBits(int x) {
    unsigned x2 = x;
    int mask = (0xff | 0xff << 8); //0000ffff
    
    int b8mask1 = (0xff << 24 | 0x00 << 16 ) | (0xff << 8 | 0x00 << 4); //ff00ff00 ~b8mask1 = 00ff00ff
    int b4mask1 = (0xf0 << 24 | 0xf0 << 16) | (0xf0 << 8 | 0xf0); // f0f0f0f0 ~b4mask1 = 0f0f0f0f
    int b2mask1 = (0xcc << 24 | 0xcc << 16) | (0xcc << 8 | 0xcc); //cccccccc -> 11001100... ~b2mask1; //33333333 -> 00110011
    int b1mask1 = (0xaa << 24 | 0xaa << 16) | (0xaa << 8 | 0xaa); //aaaaaaaa ->1010... ~b1mask1 55555555 -> 010101...
    
    x2 = (x2 & mask) << 16| ((x2 & ~mask) >> 16 & mask);
    x2 = (x2 & b8mask1) >> 8 | (x2 &~b8mask1) << 8;
    x2 = (x2 & b4mask1) >> 4 | (x2 &~b4mask1) << 4;
    x2 = (x2 & b2mask1) >> 2 | (x2 &~b2mask1) << 2;
    x2 = (x2 & b1mask1) >> 1 | (x2 &~b1mask1) << 1;
    

    return x2;                                       /*
                                                     beefdead
                                                     efbeadde
                                                     feebdaed
                                                     fbbe7ab7
                                                     f77db57b
                                                     */
}

/*
 * satAdd - adds two numbers but when positive overflow occurs, returns
 *          maximum possible value (Tmax), and when negative overflow occurs,
 *          it returns minimum negative value (Tmin)
 *   Examples: satAdd(0x40000000,0x40000000) = 0x7fffffff
 *             satAdd(0x80000000,0xffffffff) = 0x80000000
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 30
 *   Rating: 4
 */
int satAdd(int x, int y) {
int res = 0;
int s = 0;
int sumsign = 0;
int overflow = 0;
int pos = 0;
int neg = 0;
int min = 0;
int max = 0;
    
    
s = (x + y); //sum
sumsign = s >> 31; //sign of sum
x = x >> 31 ;           // extract the sign bit from x
y = y >> 31 ;           // extract sign bit from y   
overflow = ((~(x ^ y)) & (x ^ sumsign)); //signs are diff, no overflow and returns 0
                                         // signs are same, but doesnt over flow it returns 0
                                        // else return 1
  
pos = overflow & (~(x ^ 0)); //if positive overflow return 1111111
neg = ~(overflow & (~(x^0))); //if negative overflow return 000000

min = 1 << 31; //1000000000000000000000000 
max = ~min; //0111111111111111111111111

res = (~overflow & s)| (overflow & ((pos & max) | (neg & min))); 
  
  return res;             /*
                            if no overflow, return sum. else return max and min.
                            (0000)|max|min.
                          */
}
/*
 * Extra credit
 */
/* 
 * float_abs - Return bit-level equivalent of absolute value of f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   When argument is NaN, return argument..
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 10
 *   Rating: 2
 */
unsigned float_abs(unsigned uf) {
  return 2;
}
/* 
 * float_f2i - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int float_f2i(unsigned uf) {
  return 2;
}
/* 
 * float_half - Return bit-level equivalent of expression 0.5*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned float_half(unsigned uf) {
  return 2;
}
