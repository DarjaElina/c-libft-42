/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:24:03 by delina            #+#    #+#             */
/*   Updated: 2023/11/05 20:19:38 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= str_len || len == 0 || start + len >= str_len)
		return (NULL);
	i = 0;
	j = 0;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < start)
		i++;
	while (j < len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf("%s", ft_substr("Hello world", 6, 3));
}*/
