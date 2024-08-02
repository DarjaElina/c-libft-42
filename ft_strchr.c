/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:34:07 by delina            #+#    #+#             */
/*   Updated: 2023/12/22 15:53:13 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char	s[100] = "Some string";
	int	c = 111;
	//int	a = '\0';

	printf("%s", ft_strchr(s, c));
	ft_strchr("teste", '\0');
}*/
