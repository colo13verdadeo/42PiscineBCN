/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:47:52 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/02 21:01:54 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	**crearmatriz(int entrega);
int	checkinicio(int argc);
void	*insertarvalormatriz(int **matriz, int valor, int x, int y);
void	*mostrarmatriz(int **matriz, int tam);
int	*insertarvalorvector(int tam, char **argv, int pos);
int	main(int argc, char **argv)
{
	int	tamano;
	int	**matriz;
	int	*valoresup;
	int	*valoresdown;
	int *valoresizq;
	int	*valoresdere;

	tamano = checkinicio(argc);

	int auxsinerror;
	auxsinerror = argv[1][2];
	if(tamano)
		return (0);
	else
		write(1, "OK\n\n", 4);
	tamano = (argc -1) / 4;
	matriz = crearmatriz(tamano);
	valoresup = insertarvalorvector(tamano, argv, 0);
	//Aqui falta seguir
	valoresdown = (int *)calloc(tamano,sizeof(int));
	valoresizq = (int *)calloc(tamano,sizeof(int));
	valoresdere = (int *)calloc(tamano,sizeof(int));

//	insertarvalormatriz(matriz, 1, 2, 2);
	mostrarmatriz(matriz, tamano);
	return (0);
}
