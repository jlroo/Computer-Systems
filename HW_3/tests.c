/* Testing Code */

#include <limits.h>
int test_bitNor(int x, int y)
{
  return ~(x|y);
}
int test_bitXor(int x, int y)
{
  return x^y;
}
int test_isNotEqual(int x, int y)
{
  return x != y;
}
int test_getByte(int x, int n)
{
  union {
    int word;
    unsigned char bytes[4];
  } u;
  int test = 1;
  int littleEndian = (int) *(char *) &test;
  u.word = x;
  return littleEndian ? (unsigned) u.bytes[n] : (unsigned) u.bytes[3-n];
}







int test_copyLSB(int x)
{
  return (x & 0x1) ? -1 : 0;
}
int test_tmax(void) {
  return INT_MAX;
}
int test_isNonNegative(int x) {
  return x >= 0;
}
