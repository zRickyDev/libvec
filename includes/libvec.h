/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 19:36:45 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/16 13:34:52 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVEC_H
# define LIBVEC_H
# include <stdlib.h>
# include <math.h>

typedef struct	s_vec3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

t_vec3			*new_vec(float x, float y, float z);
t_vec3			*vec_copy(t_vec3 *v1, t_vec3 v2);

t_vec3			*vec_add(t_vec3 v1, t_vec3 v2);
t_vec3			*vec_sub(t_vec3 v1, t_vec3 v2);
t_vec3			*vec_mul(t_vec3 v1, t_vec3 v2);
t_vec3			*vec_scale(t_vec3 v1, float f);
t_vec3			*vec_divide(t_vec3 v1, float f);

float			vec_dot(t_vec3 v1, t_vec3 v2);
t_vec3			*vec_cross(t_vec3 v1, t_vec3 v2);
void			vec_inv_sign(t_vec3 *v1);

float			vec_length(t_vec3 v);
float			vec_normalize(t_vec3 *v);
void			vec_free(t_vec3 *v);

#endif
