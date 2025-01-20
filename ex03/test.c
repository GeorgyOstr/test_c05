/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 23:09:58 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/20 13:52:49 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

void	test(int nb, int power)
{
	printf("%i to power %i  = %i\n", nb, power, ft_recursive_power(nb, power));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		test(atoi(argv[1]), atoi(argv[2]));
	}
	test(1, 2);
	test(3, 5);
	test(0, 0);
	test(-1, 0);
	test(12, -3);
	return (1);
}
