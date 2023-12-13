/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:07:57 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/26 19:44:24 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fr_putchar(char nn)
{
	write (1, &nn, 1);
}

void	ft_print_comb2(void)
{
	int	v[3];

	v[0] = -1;
	while (v[0]++ < 99)
	{
		v[1] = v[0];
		while (v[1]++ < 99)
		{
			fr_putchar((v[0] / 10) + '0');
			fr_putchar((v[0] % 10) + '0');
			write(1, " ", 1);
			fr_putchar((v[1] / 10) + '0');
			fr_putchar((v[1] % 10) + '0');
			if (!(v[0] == 98 && v[1] == 99))
			{
				write(1, ", ", 2);
			}
		}
	}
}
/*int main(){
 ft_print_comb2();
 }*/
