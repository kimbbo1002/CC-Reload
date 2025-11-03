/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:41:18 by bokim             #+#    #+#             */
/*   Updated: 2025/11/03 13:54:50 by bokim            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int res;
	int i;
	
	res = 1;
	if (nb > 0)
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(4));
}
