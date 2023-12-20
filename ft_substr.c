/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:24:03 by delina            #+#    #+#             */
/*   Updated: 2023/11/25 23:28:53 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	alloc_len;
	size_t	remaining_len;

	remaining_len = ft_strlen(s + start);
	alloc_len = remaining_len;
	if (len < remaining_len)
		alloc_len = len;
	if (!s)
		return (NULL);
	j = 0;
	res = (char *)malloc((alloc_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = start;
	while (s[i] && j < len)
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	//char *s = "all of this !";
	//size_t size = strlen(s);
	//char *ret = ft_substr(s, 0, size);
	//printf("%s", ret);
//	printf("%s", ft_substr("Hello world", 6, 3));i
//	char *str = "01234";
//	size_t size = 10;
//	char *ret = ft_substr(str, 10, size);
	//if (!strncmp(ret, "", 1))
	//{
	//	printf("%s", "TEST_SUCCESS");
	//}
	//printf("%s", "TEST_FAILED");
}*/
