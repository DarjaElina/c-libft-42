/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:48:04 by delina            #+#    #+#             */
/*   Updated: 2023/11/25 22:33:51 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (needle == NULL || *needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (*haystack != '\0' && i < len)
	{
		while (*needle != '\0' && *needle == *haystack)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			if (i + needle_len <= len)
				return ((char *)haystack - needle_len);
			else
				return (NULL);
		}
		haystack++;
		i++;
	}
	return (NULL);
}

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}*/

/*#include <stdio.h>
int	main(void)
{
	char haystack[30] = "aaabcabcd";
	printf("%s", ft_strnstr(haystack, "cd", 8));
 	//char s1[100] = "Helworllo world";
 	//char s2[100] = "world";
 	//printf("%s", ft_strnstr(s1, s2, 15));
}*/
