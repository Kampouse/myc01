#include "unistd.h"

#include "stdio.h"

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

void ft_putstr(char *str)
{
while(*(str)!='\0')
	{	write(1,str,1);
		str++;
	}
}

int ft_strlen(char *str)
{
	int lenght;
	lenght = 0;
while(*(str)!='\0')
	{	
		lenght++;
		str++;
	}
	return (lenght);
}


void ft_rrev_int_Tab(int *tab, int size)
{
int Reversed_array[size];
int reversing = size;
int i = 0;
	while(tab[i])
		{ 
		 Reversed_array[reversing - 1] = tab[i];
		i++;
		reversing--;
	}	
}






int main(void)
{
int cat[5] = {1,2,3,4,5};
ft_rrev_int_Tab(cat,5);
}
