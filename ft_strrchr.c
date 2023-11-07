/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:29:52 by delina            #+#    #+#             */
/*   Updated: 2023/11/05 16:13:40 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (*s != '\0')
		s++;
	if (c == '\0')
		return ((char *)s);
	while (len >= 0)
	{
		if (*s == c)
			return ((char *)s);
		len--;
		s--;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	int 	c = 'e';
	char 	*s =  "hello world";
	printf("%s", ft_strrchr(s, c));
}*/
