/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:53:42 by delina            #+#    #+#             */
/*   Updated: 2023/10/24 13:07:42 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	str[n] = '\0';
}

#include <stdio.h>
int main(void)
{
	char s[10] = "Hello";
	printf("Before: %s\n", s);
	ft_bzero(s, 5);
	printf("After: %s", s);
}
