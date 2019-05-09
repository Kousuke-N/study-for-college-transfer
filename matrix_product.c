#include "basic.h"

// 素朴なアルゴリズムby自分
// 3x3の行列
// 計算量はO(n^3)
void matrix_product(int m1[3][3], int m2[3][3])
{
  int i, j, k;
  int result[3][3] = {0};
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      for (k = 0; k < 3; k++)
      {
        result[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }
  print_matrix(3, 3, result);
}

int main()
{
  print_title("matrix_product1");
  int q1[3][3] = {
      {1, 1, -2},
      {-1, 1, 0},
      {2, 0, 1}};
  int q2[3][3] = {
      {1, -1, 2},
      {1, 5, 2},
      {-2, 2, 2}};
  matrix_product(q1, q2);
}