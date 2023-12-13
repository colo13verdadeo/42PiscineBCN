/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:28:49 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/28 21:20:11 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	k;
	int	aux;
	int	tam;

	j = -1;
	k = size;
	tam = (size / 2);
	while (k--, j++ < tam)
	{
		aux = tab[j];
		tab[j] = tab[k];
		tab[k] = aux;
	}
}
/*int main()

{

    int siz = 11;

    int v[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    ft_rev_int_tab(v, siz);
}*/
