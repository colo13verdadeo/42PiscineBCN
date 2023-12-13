/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:42:23 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/26 22:59:33 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	b;

	b = '-';
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nbr == -2147483647)
	{
		write (1, "-2147483647", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, &b, 1);
		nbr = nbr * -1;
	}
	if (nbr / 10)
		ft_putnbr((nbr / 10));
	b = (nbr % 10) + '0';
	write(1, &b, 1);
}