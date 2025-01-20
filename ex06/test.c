/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:12:30 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/20 16:01:16 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

void	test(int i)
{
	if (ft_is_prime(i))
		printf("%i is prime\n", i);	
	else 
		printf("%i is not prime\n", i);
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
	test(46340 * 46340);
    test(2147483647);
	test(46340 * 46341);
	return (0);
}
