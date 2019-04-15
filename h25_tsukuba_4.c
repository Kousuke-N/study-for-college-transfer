// 問題(1)
// f1(3, 5):15
// f1(5, 3):15
// f2(3, 5):8
// f3(3, 5):15
// f4(3, 5):15
// 問題(2)
// ５回
// 問題(3)
// 15回
// 問題(4)
// 式2：2回
// 式3：6回
// 問題(5)
// ア：r  イ：y-1  ウ：x+r  エ：0
// 問題(6)
// オ：0  カ：x+f6(x*2, y/2)  キ：f6(x*2, y/2)

int times = 0;

// もっとも単純な掛け算の方法
// →xをy回足す
int f1(int x, int y)
{
  int r;
  for (r = 0; y > 0; y--)
  {
    r = r + x;
  }
  return r;
}

// これはf3を達成するために使う関数
// しかし、やっていることはとても単純で x+y
int f2(int x, int y)
{
  int r;
  for (r = x; y > 0; y--)
  {
    r++;
  }
  return r;
}

// 難しいことをしているように見えるが、これもやはりxをy回足しているだけ
int f3(int x, int y)
{
  int r;
  for (r = 0; y > 0; y--)
  {
    r = f2(r, x);
  }
  return r;
}

// ロシア乗算法
int f4(int x, int y)
{
  int r;
  for (r = 0; y > 0; y = y / 2)
  {
    if (y % 2 == 1)
    {
      r = r + x;
      times++;
    }
    x = x * 2;
  }
  return r;
}

// for文を再帰関数に書き直す問題
// ミスなく解けるようになりたい
int g(int x, int y, int r)
{
  printf("x:%d, y:%d, r:%d\n", x, y, r);
  if (y == 0)
  {
    return r;
  }
  else
  {
    return g(x, y - 1, x + r);
  }
}
int f5(int x, int y)
{
  return g(x, y, 0);
}

// 難しかった
// 返り値にx+~を使うという発想がなかった。反省
int f6(int x, int y)
{
  if (y == 0)
  {
    return 0;
  }
  else if (y % 2 == 1)
  {
    return x + f6(x * 2, y / 2);
  }
  else
  {
    return f6(x * 2, y / 2);
  }
}

int main()
{
  printf("問題(1)\n");
  // printf("f1(3, 5):%d\n\n", f1(3, 5));
  // printf("f1(5, 3):%d\n\n", f1(5, 3));
  // printf("f2(3, 5):%d\n\n", f2(3, 5));
  // printf("f3(3, 5):%d\n\n", f3(3, 5));
  printf("f6(11, 33):%d\n", f6(11, 33));
  return 0;
}