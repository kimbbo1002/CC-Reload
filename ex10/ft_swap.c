/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bokim <bokim@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:28:44 by bokim             #+#    #+#             */
/*   Updated: 2025/11/03 13:33:02 by bokim            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main()
{
	int a;
	int b;
	int* p1;
	int* p2;

	a = 5;
	b = 2;
	p1 = &a;
	p2 = &b;
	printf("%d, %d\n", a, b);
	ft_swap(p1, p2);
	printf("%d, %d\n", a, b);
}
