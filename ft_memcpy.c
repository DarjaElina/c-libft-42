/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:10:00 by delina            #+#    #+#             */
/*   Updated: 2023/10/25 22:34:40 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *s1;
	const char *s2;

	s1 = dest;
	s2 = src;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char s1[10] = "Hello";
	char s2[10] = "World";

	printf("Before: %s\n", s1);
	ft_memcpy(s1, s2, 3);
	printf("After: %s", s1);
}




