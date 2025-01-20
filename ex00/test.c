/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:12:30 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/18 14:12:24 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

void	test(int i)
{
	printf("Factorial of %i, is %i\n", i, ft_iterative_factorial(i));	
}

int	main(void)
{
	test(4);
	test(10);
	test(0);
	test(-1);
	test(30);
	return (0);
}
