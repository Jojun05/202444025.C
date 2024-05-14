#include<stdio.h>

void result(int r)
{
  printf("%.2lf",r*r*3.14);
}
int main()
{
  int r;
  scanf("%d",&r);
  result(r);
  return 0;
}