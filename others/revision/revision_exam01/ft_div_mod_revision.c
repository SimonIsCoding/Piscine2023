/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_revision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:04:01 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/26 20:22:30 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod_revision(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 17;
	b = 5;
	div = 0;
	mod = 0;
	ft_div_mod_revision(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d", a, b, div, mod);
}
