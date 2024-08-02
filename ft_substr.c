/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:24:03 by delina            #+#    #+#             */
/*   Updated: 2023/12/22 16:43:32 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = start;
	j = 0;
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
