#include "unistd.h"


void ft_ft(int *value)
{
  int test;
  test = 42;
  *value = test;

}
void ft_ultimate(int *********value)
{
 *********value = 42; 
}


void ft_swap(int *first,int *second)
{
int   middle;
int   middleb;

middle = *first;
middleb = *second;

*first = middleb;
*second= middle;

}


 void ft_div_mod(int x, int y, int *div,int *mod)
{
*div = x / y;
*mod = x % y;

} 
void ft_ultmate_mod(int *x, int *y)
{
  int temp;
  temp = *x;
 *x = *x / *y;
*y = temp % *y;

}
