/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/12 20:07:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		i;

	head = lst;
	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}
