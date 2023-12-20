/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:29:52 by delina            #+#    #+#             */
/*   Updated: 2023/11/27 00:08:31 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
//	int 	c = 'e';
//	char 	*s =  "hello world";
//	printf("%s", ft_strrchr(s, c));
	char *src = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";
	char *d1 = strrchr(src, L'–');
	//char *d2 = ft_strrchr(src, L'–');
	printf("%s", d1);
}*/
