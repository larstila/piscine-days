#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
  int result;

  result = 1;
  if(power > 0)
    {
	  while(power > 0)
   	 {
     		 result = result * nb;
     		 power--;
   	 }
    }
  else if(power < 0)
     {
       result = 0;
  }
  else
      {
	result = 1;
      }

  return result;
}

int	main(void)
{
  printf("%d\n", ft_iterative_power(2,5));
  return (0);
}
