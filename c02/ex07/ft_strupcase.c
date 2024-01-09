/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:36:53 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/29 18:22:33 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
void	showme( char *ar)
{
	int	i;

	i = 0;
	while (ar[i] != '\0')
	{
		write(1, &ar[i], 1);
		i++;
	}
}
int main()
{
    char v1[] = "a";
    char v2[] = "b";
    char v3[] = "z";
    char v4[] = "c";
    char v5[] = "j-c";
    int nmain;

    nmain = 4;
	ft_strupcase(v1);
    ft_strupcase(v2);
    ft_strupcase(v3);
    ft_strupcase(v4);
    ft_strupcase(v5);
    //showme(v1);
    //showme(v2);
}*/
