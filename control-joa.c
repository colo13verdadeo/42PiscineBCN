/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:47:57 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/02 18:36:34 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	checkinicio(int argc)
{
	int	tamano;
	int	auxout;

	tamano = (argc - 1) % 4;
	if(tamano != 0 || argc == 1)
	{
		write(1, "No es una matriz lida, debe ser: NxN su diametro, te faltan: ", 61);
		auxout = 4 - tamano + '0';
		write(1, &auxout, 1);
		write(1, "arguementos.", 12);
		return (1);
	}
	return (0);
}
