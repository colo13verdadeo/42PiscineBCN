/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:03:49 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/29 18:19:51 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
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
}*/
/*
int main()

{

    char v1[] = "A";

    char v2[] = "B";

    char v3[] = "Z";

    char v4[] = "C";

    char v5[] = "J";

    int nmain;

    nmain = 4;

    ft_str_is_lowercase(v1);

    ft_str_is_lowercase(v2);

    ft_str_is_lowercase(v3);

    ft_str_is_lowercase(v4);

    ft_str_is_lowercase(v5);

    //showme(v1);

    //showme(v2);

}
*/
