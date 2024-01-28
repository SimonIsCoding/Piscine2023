/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:44:57 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/02 18:59:36 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	c;
	int	d;
	int	mod1;
	int	div1;

	c = 17;
	d = 5;
	ft_div_mod(c, d, &div1, &mod1);
	printf("a =%d, B= %d, div = %d, mod = %d", c, d, div1, mod1);
}
