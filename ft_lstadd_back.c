/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 23:27:34 by hboudhir          #+#    #+#             */
/*   Updated: 2019/11/27 23:29:30 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{    
	t_list *temp;
    
    temp = (t_list*)malloc(sizeof(t_list));
    temp->data = 10;
    temp->link = NULL;
    if (*root == NULL)
        *root = temp;
    else
    {
        t_list *p;
        p = *root;
        while (p->link != NULL)
            p = p->link;
        p->link = temp;            
    }  
	
	
}