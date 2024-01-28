/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                                :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:06:46 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/25 17:12:44 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}
/*	
int main(void)
{
    int a = 4;
    int b = 10;
   
    ft_ultimate_div_mod(&a, &b);

    printf("Division : %d, Resto : %d\n", a, b);

    return 0;
}*/
