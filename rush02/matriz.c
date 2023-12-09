/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:41:36 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/09 20:38:48 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char	**crearmatriz(int entrega)
{
	char	**matriz = (char	**)malloc((entrega * sizeof(char *)));
	int 	index;
	int		x;
	int		y;

	index = 0;
	while(index < entrega)
	{
		//Crear el vector con N cantidad de espacios (37 en este caso)
	matriz[index] = (char *)malloc(51 * sizeof(char *));
	index++;
	}
	x = 0;
	while (x < entrega)
	{
		y = 0;
		while(y < entrega)
		{
			matriz[x][y] = '\v';
			y++;
		}
		x++;
	}
	return (matriz);
}

void	*mostrarmatriz(char **matriz)
{
	char auxshow;
	int	x;
	int y;

	x = 0;
	while(matriz[x][0] != '\v' && matriz[x][0])
	{
		y = 0;
		while(matriz[x][y] != '\v' && matriz[x][y])
		{
			auxshow = matriz[x][y];
			//printf("%i", auxshow);
			write(1, &auxshow, 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}

void    insertar(char **matriz, int x, int y, int val)
{
    if(!matriz[x - 1][y - 1] || matriz[x - 1][y - 1] == val)
        matriz[x - 1][y - 1] = val;
    else
        write(1, "Error\n", 6);
}
