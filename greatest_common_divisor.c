#include "basic.h"

// 一番最初に考えたもの
int gcd1(int m, int n)
{
  int r;
  while (1)
  {
    r = n % m;
    if (r == 0)
    {
      return m;
    }
    n = m;
    m = r;
  }
}

// 教科書
int gcd2(int x, int y)
{
  int a = x;
  int b = y;
  // ここはなくてもおけ
  if (a < b)
    swap(&a, &b);

  while (b != 0)
  {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

// gcd2を再帰で書く
int gcd3(int x, int y)
{
  int a = x > y ? x : y;
  int b = x > y ? y : x;

  if (b == 0)
  {
    return a;
  }
  else
  {
    return gcd3(b, a % b);
  }
}

// 総括
// ここで考えているアルゴリズムはユークリッドの互除法と呼ばれるものである。
// また計算量だが、最悪でも小さい数の桁数の5倍繰り返せば求められる(ラメの定理)
// なので、これの計算量は小さい数の桁数をdとした時、O(d)

int main()
{
  print_title("gcd1");
  printf("%d\n", gcd1(36, 24));
  printf("%d\n", gcd1(24, 36));
  printf("%d\n", gcd1(100, 102));
  print_title("gcd2");
  printf("%d\n", gcd2(36, 24));
  printf("%d\n", gcd2(24, 36));
  printf("%d\n", gcd2(100, 102));
  print_title("gcd3");
  printf("%d\n", gcd2(36, 24));
  printf("%d\n", gcd2(24, 36));
  printf("%d\n", gcd2(100, 102));
}