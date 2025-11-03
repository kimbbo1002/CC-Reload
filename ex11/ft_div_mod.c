/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:33:23 by bokim             #+#    #+#             */
/*   Updated: 2025/11/03 13:37:26 by bokim            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main()
{
	int a;
	int b;
	int* p1;
	int* p2;

	a = 8;
	b = 2;
	p1 = &a;
	p2 = &b;
	printf("%d, %d\n", a, b);
	ft_div_mod(a, b, p1, p2);
	printf("%d, %d\n", a, b);
}
