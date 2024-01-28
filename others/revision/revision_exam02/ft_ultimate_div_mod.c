/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:59:44 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/02 19:14:25 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int	main(void)
{
	int	c;
	int	d;

	c = 17;
	d = 5;
	printf("a = %d, b = %d\n", c, d);
	ft_ultimate_div_mod(&c, &d);
	printf("a = %d, b = %d\n", c, d);
}
