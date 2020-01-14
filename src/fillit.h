/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:48:04 by bryam             #+#    #+#             */
/*   Updated: 2019/11/13 19:04:38 by bryam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_FILLIT_H
# define FILLIT_FILLIT_H

# include "../libft/libft.h"

typedef struct		s_figure
{
	int				size;
	int				num;
	char			**figure;
	struct s_figure	*next;
}					t_figure;

t_figure			*read_figure(int fd);
t_figure			*new(int size);
void				check(t_figure *tmp, char **line, int num, int key);
void				ft_error(int err);
void				ft_swap(char *a, char *b);
void				valid(t_figure *head);
void				number_of_char(char **figure);
int					cheak_communication(char **figure, int i, int j, int *cnt);
void				full_of_point(char *new, int m_s_sq);
char				*ft_copy(char *new, char *old, int m_s_sq);
void				refresh(t_figure *start, int m_s_sq);
int					check_real_s(t_figure *start);
void				change_s_f(t_figure *start, int m_s_sq);
void				clear_old_figure(t_figure *start);
int					check_real_size(t_figure *start);
void				make_letters_from_sym(t_figure *start);
void				back_traking(t_figure *start);
int					is_get_in_the_way(t_figure *head, t_figure *tmp);
void				move_up(char **figure, int size);
void				move_left(char **figure, int size);
void				move_up_left(t_figure *start);
void				move_down(char **figure, int size);
void				move_right(char **figure, int size);
int					move(t_figure *tmp);
int					have_no_down(char **figure, int size);
int					have_no_right(char **figure, int size);
int					min_size(t_figure *start);
t_figure			*back(t_figure *head, int num);
void				join(t_figure *start);
void				clear_all(t_figure *head);

#endif
