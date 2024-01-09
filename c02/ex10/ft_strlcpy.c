/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:13:15 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/04 17:04:30 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void	ft_putstr(char *str){
	int	v;
	int	bb;

	v = 0;
	while (str[v] != '\0')
		v++;
	write(1, str, v);
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	v;

	v = 0;
	if (size == 0)
	{
		while (src[v] != '\0')
		{
			v++;
			return (v);
		}
	}
	while (src[v] != '\0' && v < size - 1)
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
	v = 0;
	while (src[v] != '\0')
		v++;
	return (v);
}
/*
int main(void){
char destf[] = "shsss";
char srcf[] = "no";
unsigned int destc;
unsigned int zz;

zz = 1;
//zz = 0 + '0';
destc = ft_strlcpy(destf, srcf, zz);
ft_putstr(destf);
}*/
