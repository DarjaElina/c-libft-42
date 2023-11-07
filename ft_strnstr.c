/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:48:04 by delina            #+#    #+#             */
/*   Updated: 2023/11/05 18:49:48 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	if (len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && i < len)
	{
		if (*haystack == *needle)
		{
			while (*needle != '\0')
			{
				if (*haystack != *needle)
					return (NULL);
				haystack++;
				needle++;
			}
			return ((char *)haystack - needle_len);
		}
		haystack++;
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
 	char s1[100] = "Some string";
 	char s2[100] = "meow";
 	printf("%s", ft_strnstr(s1, s2, 5));
}*/
