/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:35:53 by wjo               #+#    #+#             */
/*   Updated: 2021/10/26 10:21:32 by wjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);
void	ft_putnbr2(int nb);

void	ft_putnbr(int nb)
{
	int	a[10];
	int	b;

	b = 10;
	if (nb > 0)
	{
		while (nb > 0)
		{
			b--;
			a[b] = nb % 10;
			nb /= 10;
		}
		while (b < 10)
		{
			a[b] += '0';
			write (1, &a[b], 1);
			b++;
		}
	}
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	ft_putnbr2(nb);
}

void	ft_putnbr2(int nb)
{	
	int	b;
	int	a[10];

	b = 10;
	if (nb < 0)
	{
		nb *= -1;
		while (nb > 10)
		{
			b--;
			a[b] = nb % 10;
			nb /= 10;
		}
		write (1, "-", 1);
		while (b < 10)
		{
			a[b] += '0';
			write (1, &a[b], 1);
			b++;
		}
	}
	else if (nb == 0)
	{
		write (1, "0", 1);
	}
}
