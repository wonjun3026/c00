#include <unistd.h>
void	ft_print_combn(int n);

void function (int val, int a, int n, int *array)
{
	int	i;

	i = 0;
	if (a == n)
	{
		while (i < n)
		{
			(array + i) += '0';
			write (1, array + i, 1);
			i++;
		}
	}
	else
	{
		while (val <= 9)
		{
			array[a] = val;
			function (val + 1, a + 1, n, array);
			val++;
			}
	}
}

void	ft_print_combn(int n)
{
	int	val;
	int	a;
	int	*array;

	val = 0;
	a = 0;
	function (val, a, n, array);
}
