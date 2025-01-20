/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:12:30 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/20 15:54:39 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

void	test(int i)
{
	printf("Sqrt of %i, is %i\n", i, ft_sqrt(i));	
}

int	main(void)
{
	test(4);
	test(25);
	test(0);
	test(1);
	test(-1);
	test(15);
	test(46340*46340);
	test(2147483647);
	return (0);
}
