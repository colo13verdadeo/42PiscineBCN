/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:28:08 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/29 19:35:40 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] < 91) || (str[i] >= 97 && str[i] < 123)))
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

    char v2[] = "z";

    char v3[] = "0";

    char v4[] = "9";

    int nmain;

    nmain = 4;

    ft_str_is_alpha(v1);

    ft_str_is_alpha(v2);

    ft_str_is_alpha(v3);

    ft_str_is_alpha(v4);

    //showme(v1);
    //showme(v2);
}
*/
