/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:12:30 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/20 13:39:01 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int	ft_recursive_factorial(int nb);

void	test(int i)
{
	printf("Factorial of %i, is %i\n", i, ft_recursive_factorial(i));
}

int	main(void)
{
	test(4);
	test(10);
	test(0);
	test(1);
	test(-1);
	test(30);
	return (0);
}
