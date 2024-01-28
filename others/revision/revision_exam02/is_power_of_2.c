/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:15:14 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/03 13:25:52 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	return (0);
}

int	main(void)
{
	int	n;

	n = 32;
	if (is_power_of_2(n) == 1)
		printf("%d est une puissance de 2", n);
	else
		printf("%d N'EST PAS une puissance de 2", n);
	return (0);
}
