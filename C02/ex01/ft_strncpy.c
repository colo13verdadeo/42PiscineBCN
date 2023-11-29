/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 22:39:22 by ybayart           #+#    #+#             */
/*   Updated: 2019/07/30 22:39:35 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i != n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	showme(char *ar)
{
	int	i;

	i = 0;
	while (ar[i] != '\0')
	{
		write(1, &ar[i], 1);
		i++;
	}
}
/*int main()
{
    char v1[] = "Holsa";
    char v2[] = "V234567";
    int nmain;
    nmain = 4;
    ft_strncpy(v1, v2, nmain);
    showme(v1);
    //showme(v2);
}*/
