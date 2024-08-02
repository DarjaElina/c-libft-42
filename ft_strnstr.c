/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:48:04 by delina            #+#    #+#             */
/*   Updated: 2023/12/29 19:50:03 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	i;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i)
			&& *(needle + i) && i <= n)
		{
			if (!*(needle + i + 1))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char haystack[30] = "aaabcabcd";
	printf("%s", ft_strnstr(haystack, "cd", 8));
 	//char s1[100] = "Helworllo world";
 	//char s2[100] = "world";
 	//printf("%s", ft_strnstr(s1, s2, 15));
}*/
