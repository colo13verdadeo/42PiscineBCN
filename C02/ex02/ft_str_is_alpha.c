/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 22:39:22 by ybayart           #+#    #+#             */
/*   Updated: 2019/07/30 22:39:35 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 65 && str[i] < 91) || (str[i] >= 97 && str[i] < 123))
		{
    write(1, "1", 1);
    return (1);
    }
    i++;
  }
  return(0);
}

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
