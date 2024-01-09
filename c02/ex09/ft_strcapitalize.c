/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:08:37 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/30 17:08:38 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		if (i && (str[j] >= 'A' && str[j] <= 'Z'))
			str[j] += 32;
		else if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A')
			|| (str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
			i = 0;
		else if (!i++ && (str[j] >= 'a' && str[j] <= 'z'))
			str[j] -= 32;
		j++;
	}
	return (str);
}
/*int main()
{
  char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  ft_strcapitalize(str1);
  int v = 0;
  while(str1[v])
  {
    write(1, &str1[v], 1);
    v++;
  }
  
}*/
