/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:23:39 by delina            #+#    #+#             */
/*   Updated: 2023/11/21 14:29:11 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	character;

	character = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == character)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
	char s[100] = "hello world";
	int c = 112;
	char *res = ft_memchr(s, c, 9);
	if (!res)
		printf("%s", "There is no such character");
	else
		printf("%s", res);
}*/	
