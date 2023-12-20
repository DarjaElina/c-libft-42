/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:59:03 by delina            #+#    #+#             */
/*   Updated: 2023/11/27 00:07:44 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
/*#include <stdio.h>
int main(void)
{
	t_list f;
	t_list s;
	t_list t;
	f.next = &s;
	s.next = &t;
	t.next = NULL;
	
	t_list *ptr = &f;
	t_list new;


	printf("Size before adding: %d\n", ft_lstsize(&f));
	ft_lstadd_back(&ptr, &new);
       	printf("Size after adding: %d\n", ft_lstsize(&f));	

}*/
