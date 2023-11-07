/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:48:43 by delina            #+#    #+#             */
/*   Updated: 2023/11/06 22:00:29 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*res_str;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	res_str = (char *)malloc((len + 1) * sizeof(char));
	if (!res_str)
		return (NULL);
	while (i < len)
	{
		res_str[i] = f(i, s[i]);
		i++;
	}
	res_str[i] = '\0';
	return (res_str);
}
/*#include <stdio.h>
char	test(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		return ft_toupper(c);
	}
	return (c);
}
int	main(void)
{
	char s[100] = "hello";
	char *res = ft_strmapi(s, test);
	printf("%s", res);
}*/
