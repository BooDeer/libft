/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:15:38 by hboudhir          #+#    #+#             */
/*   Updated: 2019/11/29 18:59:36 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"


typedef	struct	s_list
{
	void			*content;
	struct node		*next;
}				t_list;

int		ft_printf(const char *, ...);
