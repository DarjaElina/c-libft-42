/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:25:10 by delina            #+#    #+#             */
/*   Updated: 2023/10/28 18:30:52 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('5'));
}
