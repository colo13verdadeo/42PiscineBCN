/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:11:16 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/29 19:23:17 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*void	showme( char *ar)
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
    char v2[] = "-123";
    char v3[] = "0";
    char v4[] = "9";
    int nmain;
    nmain = 4;
    ft_str_is_numeric(v1);
    ft_str_is_numeric(v2);
    ft_str_is_numeric(v3);
    ft_str_is_numeric(v4);
    //showme(v1);
    //showme(v2);
}*/
