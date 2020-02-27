#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
  
  if(power > 0)
    {
	  while(power >= 1)
	    {
	      printf("%d  %d\n", nb, power); 
	      return nb * ft_recursive_power(nb,power-1);
	    }
    }
  if(power == 0)
  {
        return 1;
  }
  return 0;
}

int	main(void)
{
  printf("%d\n", ft_recursive_power(2,5));
  return (0);
}
