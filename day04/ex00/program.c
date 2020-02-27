#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
  int result;

  result = nb;
  if(13 > nb > 0)
    {
	  while( nb  > 1)
	    {
	      nb--;
	      result = result * (nb);
	    }
    }
  else if(nb == 0)
	     {
	       result = 1;
  }
    else
      {
	result = 0;
      }

  return result;
}

int	main(void)
{
  printf("%d\n", ft_iterative_factorial(12));
  printf("%d\n", ft_iterative_factorial(13));
  return (0);
}
