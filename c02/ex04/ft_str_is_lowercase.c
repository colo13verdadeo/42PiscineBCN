/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:47:13 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/04 16:41:19 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] < 123))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
void showme( char *ar)
{
  int i;
  i = 0;
while (ar[i] != '\0')
  {
  write(1, &ar[i], 1);
  i++;
  }
  }

int main()
{
    char v1[] = "A";
    char v2[] = "-123A";
    char v3[] = "0";
    char v4[] = "9";
    char v5[] = "z";
    int nmain;
    nmain = 4;
    ft_str_is_lowercase(v1);
    ft_str_is_lowercase(v2);
    ft_str_is_lowercase(v3);
    ft_str_is_lowercase(v4);
    ft_str_is_lowercase(v5);
    //showme(v1);
    //showme(v2);
}*/
