/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:05:54 by sclea             #+#    #+#             */
/*   Updated: 2020/02/01 10:45:28 by sclea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int y;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else
	{
		y = y * nb;
		ft_recursive_factorial(nb - 1);
	}
	return (y);
}
