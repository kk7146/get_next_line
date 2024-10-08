/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donson <donson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:12:43 by donson            #+#    #+#             */
/*   Updated: 2023/11/10 13:59:47 by donson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_SIZE
#  define FD_SIZE 1042
# endif

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list_line
{
	char				*content;
	struct s_list_line	*next;
}	t_list_line;

char		*get_next_line(int fd);
int			ft_strchr_lst(t_list_line *lst, int c);
char		*ft_strjoin(char *s1, char *s2);
int			ft_lst_add_back(t_list_line **lst, t_list_line *new);
t_list_line	*fill(char *str, char charset);
int			split_fail_free(t_list_line **result, t_list_line *new);

#endif