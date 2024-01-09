/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:14:22 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/11 20:15:54 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	index2;
	unsigned int	index3;

	index = 0;
	index2 = 0;
	index3 = 0;
	while (src[index] != '\0')
		index++;
	while (dest[index2] != '\0')
		index2++;
	while (index3 != index)
	{
		dest[index2] = src[index3];
		index3++;
		index2++;
	}
	dest[index2] = '\0';
	if (size <= index)
		return (size + index);
	return (size);
}
