/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francoro <francoro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:16:10 by francoro          #+#    #+#             */
/*   Updated: 2023/12/09 20:37:31 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	**crearmatriz (int);
void	*mostrarmatriz(char**);
void	insertar(char, int, int, int);
void	L1(char **index, char **valor, char *buffer, int bytes);
void	ver(char **index, char **valor, char *buffer, int bytes);

int main() {
	int		i1;
	char	**index;
	char	**valor;
    // Abrir el archivo para lectura
    int file_descriptor = open("numbers.dict", O_RDONLY);

    if (file_descriptor == -1) {
        perror("Error al abrir el archivo para lectura");
		//Cambiar a return 1!
        exit(EXIT_FAILURE);
    }

    // Leer y mostrar el contenido del archivo
    char buffer[1024];
    ssize_t bytes_leidos;

    printf("Contenido del archivo:\n");
	bytes_leidos = read(file_descriptor, buffer, sizeof(buffer));
    if (bytes_leidos == -1) {
        perror("Error al leer el archivo");
        close(file_descriptor);
        exit(EXIT_FAILURE);
    }

	i1 = (int) bytes_leidos;
    // Cerrar el archivo de lectura
    close(file_descriptor);
	// Crear la matriz con N cantidad de espacios como X
	index = crearmatriz (39 + 5);
	valor = crearmatriz (39 + 8);
	L1(index, valor, buffer, i1);
	mostrarmatriz(index);
    return 0;
}
