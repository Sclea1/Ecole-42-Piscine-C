/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:09:47 by sclea             #+#    #+#             */
/*   Updated: 2020/02/04 17:17:14 by sclea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x,int y)
{
	int i;
	int j;

	j = 1;
	if (x > 0)
		while (j <= y)
		{
			i = 1;
			while (j <= y)
			{
				if ((j == 1) && ((i == 1) || (i == x)))
					ft_putchar('A');
				if (((j == y) && ((i == 1) || (i == x))) && (y > 1))
					ft_putchar('C');
				if (((j == 1) || (j == y)) && ((i > 1) && (i < x )))
					ft_putchar('B');
				if (((j > 1) && (j < y)) && ((i == 1) || (1 == x)))
					ft_putchar('B');
				if (((j > 1) && (j < y)) && (( i > 1) && (i < x)))
					ft_putchar(' ');
				i++;
			}
			ft_putchar('\n');
			j++;
		}
}
