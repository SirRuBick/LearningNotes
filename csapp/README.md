# Exercises for CSAPP
## Section 2 Representing and Manipulating Information
### Information Storage

#### 2.1

A. 0x39A7F8 -> 1110011010011111111000<br>
B. 1100100101111011 -> 0xC97B<br>
C. 0xD5E4C -> 1011010111101100<br>
D. 10,0110,1110,0111,1011,0101 -> 0x26E7B5<br>
*code*: [p21.py](./p21.py)<br>

#### 2.2

| n | decimal | hexadecimal |
| ---- |----|----|
| 9 | 512 | 0x200 |
| 19 | 524288 | 0x80000 |
| 14 | 16384 | 0x4000 |
| 17 | 131072 | 0x20000 |
| 7 | 128 | 0x80 |
- 2.3

| Decimal | Binary | Hexadecimal |
| ---- |:----:|----:|
| 0   | 0000 0000 | 0x00 |
| 167 | 1010 0111 | 0xA7 |
| 62  | 0011 1110 | 0x3E |
| 188 | 1011 1100 | 0xBC |
| 55  | 0011 0111 | 0x37 |
| 136 | 1000 1000 | 0x88 |
| 243 | 1111 0011 | 0xF3 |

#### 2.4

A. 0x503C + 0x8 = 0x5044<br>
B. 0x503C - 0x40 = 0x4FFC<br>
C. 0x503C + 64 = 0x507C<br>
D. 0x50EA - 0x503C = 0xAE<br>
#### 2.5
A. Little endian: 21     Big endian: 87    <br>
B. Little endian: 2143   Big endian: 8765  <br>
C. Little endian: 214365 Big endian: 876543<br>
#### 2.6
A.<br>
0x00359141 -> 00000000001**101011001000101000001**<br>
0x4A564504 ->   010010100**101011001000101000001**00<br>
B. matched bits: 101011001000101000001<br>
C. Floating points have higher order bits do not match with integer
#### 2.7
61 62 63 64 65 66
#### 2.8
| Operation | Result |
| ---- |:----|
| a | 01101001 |
| b | 01010101 |
| ~a | 10010110 |
| ~b | 10101010 |
| a&b | 01000001 |
| a|b | 01111101 |
| a^b | 00111100 |
#### 2.9
A.<br>
| Complement R G B | Color |
|:----:|:----:|
| 1 1 1 | Black |
| 1 1 0 | Blue |
| 1 0 1 | Green |
| 1 0 0 | Cyan |
| 0 1 1 | Red |
| 0 1 0 | Magenta |
| 0 0 1 | Yellow |
| 0 0 0 | White |
B.<br>
Blue | Green  = 011<br>
Yellow & Cyan = 010<br>
Red ^ Magenta = 001<br>
#### 2.10
| Step | *x | *y |
|:----:|:----:|:----:|
| Initially | a | b |
| Step 1 | a | a^b |
| Step 2 | b | a^b |
| Step 3 | b | a |
#### 2.11
A. k+1<br>
B. Because it does exclusive or on the same element.<br>
C. escapte when first == last<br>
#### 2.12
```c
//A
x & 0xFF

//B
x ^ 0xFFFFFF00

//C
x | 0xFF
```
#### 2.14
0x66 -> 0110 0110 -> 1001 1001 -> 0x99<br>
0x39 -> 0011 1001 -> 1100 0110 -> 0xC5<br>
| Expression | Value | Expression | Value |
|:----:|:----:|:----:|:----:|
| x & y | 0x20 | x && y | 0x01 |
| x | y | 0x7F | x || y | 0x01 |
| ~x | ~y | 0xDF | !x || !y | 0x00 |
| x & !y | 0x00 | x && ~y | 0x01 |
#### 2.15
!(x ^ y)
#### 2.16
| x | x<<3 | x>>>2 | x>>2 |
| ---- |:----:|----:|----:|
| 0xC3 11000011 | 00011000 0x18 | 00110000 0x30 | 11110000 0xF0 |
| 0x75 01110101 | 10101000 0xA8 | 00011101 0x1D | 00011101 0x1D |
| 0x87 10000111 | 00111000 0x38 | 00100001 0x21 | 11100001 0xE1 |
| 0x66 01100110 | 00110000 0x30 | 00011001 0x19 | 00011001 0x19 |

### Integer Representations
#### 2.17
| Hexadecimal | Binary | B2U4 | B2T4 |
|:----:|:----:|:----:|:----:|
| 0xE | [1110] | 14 | -2 |
| 0x0 | [0000] | 0  |  0 |
| 0x5 | [0101] | 5  |  5 |
| 0x8 | [1000] | 8  | -8 |
| 0xD | [1101] | 13 | -3 |
| 0xF | [1111] | 15 | -1 |
#### 2.18
