/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:16:33 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/09 20:55:35 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// Busca el ":" y lo asigna segun corresponda (index y valor)

// Dar vuelta el char y normalizar
void	L2(char **index, char **valor, char *buffer, int bytes)
{
	int	x;
	int	y;
	int aux;

	x = 0;
	while (index[x][0] != '\v' && index[x][0])
	{
		while (index[x][y] != '\v' && index[x][y])
			y++;
		aux = y;
		while (!(y + 1))
			index[x][y--] = index[x][aux++];
		y = 0;
		x++;
	}
}
// Encuentra cada linea COMPLETA y la guarda en index
void	L1(char **index, char **valor, char *buffer, int bytes)
{
	int	i1;
	int	i2;
	int	ix;
	int	iy;

	i1 = 0;
	ix = 0;

	printf("%i", bytes);
	while (bytes--)
	{
		if(buffer[i1] == '\n')
		{
			i2 = i1;
			iy = 0;
			while ((i2) && buffer[i2 - 1] != '\n')
			{
				index[ix][iy++] = buffer[i2 - 1];
				i2--;
			}
			ix++;
		}
		i1++;
	}
	L2 (index, valor, buffer, bytes);
}

void	ver(char *buffer, int bytes)
{
	int	i1;

	i1 = 0;
	while (bytes--)
	{
		write(1, &buffer[i1++], 1);
	}
}

