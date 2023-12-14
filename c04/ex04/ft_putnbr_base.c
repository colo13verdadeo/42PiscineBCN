/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:28:29 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/14 10:09:29 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int nbr, char *base)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (base[i1])
	{
		i2 = 0;
		while (base[i2])
		{
			if (base[i1] == base[i2] && i2 != i1)
				return (1);
			i2++;
		}
		i1++;
	}
	if (i1 < 2)
		return (1);
	return (i1);
}

void	hexa(int nbr)
{
	int	i1;
	int	num;

	i1 = nbr;
	while (i1)
	{
		if (i1 % 10)
	}
	num = nbr / 10;
	if (num)
		hexa (num);
	num = nbr % 10;
	write (1, &num, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	num;

	num = check(nbr, base);
	if (num == 1)
			return;

}
