/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:35:15 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/12/07 12:32:47 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n <= index)
		return (n);
	while (s1[index] == s2[index] && s1[index] != '\0'
		&& s2[index] != '\0' && n - 1 > index)
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
