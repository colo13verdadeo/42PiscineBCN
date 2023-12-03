/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:49:06 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/02 21:01:28 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Crea la matriz
#include <unistd.h>
#include <stdlib.h>
int **crearmatriz(int entrega)
{
	int **matriz = (int **)malloc((entrega * sizeof(int *)));
	int index;
	int	x;
	int	y;

	index = 0;
	while(index < entrega)
	{	
	matriz[index] = (int *)malloc(entrega * sizeof(int *));
	index++;
	}
	
	x = 0;
	y = 0;

	while (x < entrega)
	{
		while(y < entrega)
		{
			matriz[x][y] = 0;
			y++;
		}
		x++;
	}
	return (matriz);
}

void	*mostrarmatriz(int **matriz, int tam)
{
	int auxshow;
	int	x;
	int y;

	x = 0;
	while(x < tam)
	{
		y = 0;
		while(y < tam)
		{
			auxshow = matriz[x][y] + '0';
			write(1, &auxshow, 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}

void	*insertarvalormatriz(int **matriz, int valor, int x, int y)
{
	matriz[x-1][y-1] = valor;
	return (0);	
}

int	*insertarvalorvector(int tam, char **argv, int pos)
{
	int x;
	int *vector = (int *)calloc(tam, sizeof(int)) ; 
	
	x = 0;

	while (x < tam)
	{
		//Falta hacer la ecuacion para que, segun el vector que  se este colocando, sea uno u otro. Se consigue con *<tam> o parecido.
		//Pos 0 = up, Pos 1 = Down (...)
		vector[x] = argv[1][x*tam-pos] - '0';
		x++;
	}
	return (vector);
}


