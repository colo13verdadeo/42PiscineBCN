/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:37:47 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/30 20:50:59 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	v;

	v = 0;
	while (src[v] != '\0' && v != n)
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	int	v;

	v = 0;
	while (str[v] != '\0')
		v++;
	write(1, str, v);
}

int main(void){
char destf[] = "shsss";
char srcf[] = "nocf";
char *destc;

destc = ft_strncpy(destf, srcf, 4);
ft_putstr(destc);
}*/
