/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:43:25 by wjo               #+#    #+#             */
/*   Updated: 2021/10/26 13:45:43 by wjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char *array, int *n)
{
	char	c;
	int	i;
	
	i = 0;
	while (i < n)
	{
		c = arriay[i] + '0';
		write (1, &c, 1);
	}
	write (1, ", ", 2);
}

int	check(char *array, int a)
{
	int	i;

	i = 0;
	if (a == 0)
		return ;
	while (i < a)
	{
		if (array[i] >= array[a])
			return (0);
		i++;
	}
	return (1);
}

void	dfs(char *array, int a, int *n)
{
	int	i;

	i = 0;
	if (a == n)
	{
		print(array);
		return;
	}
	else
	{
		while (i < 10)
		{
			array[a] = i;
			if (check(array, a)
				dfs(array, a + 1, &n);
			i++
		}
	}			   	
}

void	ft_print_combn(int n)
{
	int	val;
	int	a;
	int *array;
	
	val = 0;
	a = 0;
	if (!(n > 0 && n < 10))
		return ;
	dfs(array, 0, 0, &n);
}
