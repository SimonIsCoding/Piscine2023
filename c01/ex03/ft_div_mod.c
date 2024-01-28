/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:58:15 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/26 15:11:00 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 17;
	b = 5;
	div = a / b;
	mod = a % b;
	ft_div_mod(a, b, &mod, &div);
	printf("a = %d, b = %d, div = %d, mod = %d", a, b, div, mod);
}*/
