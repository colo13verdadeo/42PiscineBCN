/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:43:01 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/14 18:45:18 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	i1;

	if (nb < 0)
		return (0);
	i1 = 1;
	while (ft_recursive_factorial(nb - 1))
	{
		i1 *= ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (i1);
}
