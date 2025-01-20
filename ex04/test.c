/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:15:21 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/20 14:30:01 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

void	test(int index)
{
	printf("Index %i of fibo is %i\n", index, ft_fibonacci(index));
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		test(atoi(argv[1]));
	}
	test(-1);
	test(0);
	test(1);
	test(2);
	test(15);
	test(4);
	return (0);
}
