/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:28:26 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/11 18:37:55 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i1[3];

	i1[0] = 0;
	if (!to_find[0])
		return (str);
	while (str[i1[0]])
	{
		if (str[i1[0]] == to_find[0])
		{
			i1[1] = 0;
			i1[2] = 0;
			while (to_find[i1[1]])
			{
				if (to_find[i1[1]] != str[i1[0] + i1[1]])
					i1[2]++;
				i1[1]++;
			}
			if (i1[2] == 0)
				return (&str[i1[0]]);
		}
		i1[0]++;
	}
	return (0);
}
