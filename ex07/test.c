/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:12:30 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/20 16:33:57 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

void	test(int nb)
{
	printf("%i is next prime after %i\n", ft_find_next_prime(nb), nb);	
}

int	main(void)
{
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(6);
	test(19);
	test(55);
	test(123838);
	test(2147483647);
	test(2147483646);
	test(2147483645);
	test(2147483644);
	test(2147483643);
	test(2147483642);
	test(2147483641);
	test(2147483640);
	return (0);
}
