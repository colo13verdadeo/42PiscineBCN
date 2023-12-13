/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:35:56 by jmonzon-          #+#    #+#             */
/*   Updated: 2023/11/27 18:43:24 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*int main()
{
	int a = 7;
	int b = 2;	
	int *div1 = &a;
	int *mod1 = &b;
	ft_div_mod(a, b, div1, mod1);
	a = a + '0';
	b = b + '0';

write (1, &a, 1);
write (1, &b, 1);
}*/
