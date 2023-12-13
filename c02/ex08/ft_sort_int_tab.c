/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:51:03 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/28 17:48:35 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	showme(int *tab, int size)
{
	int	aux;

	while (size)
	{
		aux = tab[size - 1] + '0';
		write(1, &aux, 1);
		size--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	aux;
	int	tam;

	j = -1;
	tam = size - 1;
	while (j++ < tam - 1)
	{
		if (tab[j] > tab[j + 1])
		{
			aux = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = aux;
			j = -1;
		}
	}
}
/*int main()
{
    int siz = 5;
    int v[5] = {1, 5, 4, 2, 0};
    //showme(v, siz);
    ft_sort_int_tab(v, siz);
    showme(v, siz);
}*/
