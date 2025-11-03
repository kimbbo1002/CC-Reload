/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:37:51 by bokim             #+#    #+#             */
/*   Updated: 2025/11/03 13:40:56 by bokim            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(4));
}
