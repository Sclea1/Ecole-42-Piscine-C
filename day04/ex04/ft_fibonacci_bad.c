/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 09:43:30 by sclea             #+#    #+#             */
/*   Updated: 2020/02/01 10:45:22 by sclea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int n)
{
	if (n == 0)
{
return (0);
}
	if (n == 1)
{
return (1);
}

int exex;

int ex;
int current;
int i;
i = 2;
exex = 0;
ex = 1;
		i = i + 1;
		while (i < n)
		{
			current = ex + exex;
			exex = ex;
			ex = current;
			i = i + 1;
		}
	return current;
}
int main(){
    
}

