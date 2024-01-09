/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:40:12 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/29 18:54:28 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putstr(char *str)
{
	int	v;
	int	bb;

	v = 0;
	while (str[v] != '\0')
		v++;
	write(1, str, v);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	v;

	v = 0;
	while (src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = src[v];
	return (dest);
}
/*
int main(void){
char destf[] = "shsss";
char srcf[] = "no";
char *destc;

destc = ft_strcpy(destf, srcf);
ft_putstr(destc);
}*/
