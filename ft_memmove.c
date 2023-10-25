/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:15:01 by delina            #+#    #+#             */
/*   Updated: 2023/10/25 22:25:18 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memmove(void *dest, const void *src, size_t len)
{
	char *dest1;
	const char src2;
	size_t	i;

	dest2 = dest;
	src2 = src;
	i = 0;

	if (dest2 < src2)
		while (i < len)
		{
			dest2[i] = src2[i];
			i++;
		}
	else
		while (len > 0)
			dest2[len - 1] = src2[len - 1];
	return (dest2);
}

#include <stdio.h>
int main(void)
{
	char s[100] = "Hello world";
	char s2[100] = s + 5;

	printf("%d", s2);
}

