/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:43:50 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/28 17:30:25 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t1;

	t1 = *a;
	*a = (*a / *b);
	*b = (t1 % *b);
}
/*int main()
{
	int a1 = 30;
	int b1 = 7;
	int *div1 = &a1;
	int *mod1 = &b1;
	ft_ultimate_div_mod(div1, mod1);
	a1 = a1 + '0';
	b1 = b1 + '0';

write (1, &a1, 1);
write (1, &b1, 1);
}*/
