// ロシア乗算法

int russian_peasant_multipication(int x, int y)
{
  int r;
  for (r = 0; y > 0; y /= 2)
  {
    if (y % 2 == 1)
    {
      r += x;
    }
    x *= 2;
  }
  return r;
}

int main(void)
{
  printf("11*33=%d\n", russian_peasant_multipication(11, 33));
  return 0;
}