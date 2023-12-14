/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:31:25 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/11 20:33:18 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i1;

	i1 = 0;
	while (str[i1++])
		write(1, &str[i1 - 1], 1);
}