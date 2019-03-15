/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 19:36:45 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/16 00:17:50 by rporcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVEC_H
# define LIBVEC_H
# include <math.h>

typedef struct	s_vec3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

t_vec3			*new_vec(float x, float y, float z);
t_vec3			*copy_vec(t_vec3 *v1, t_vec3 v2);

t_vec3			*add_vec(t_vec3 *v1, t_vec3 v2);
t_vec3			*sub_vec(t_vec3 *v1, t_vec3 v2);
t_vec3			*mul_vec(t_vec3 *v1, t_vec3 v2);
t_vec3			*div_vec(t_vec3 *v1, t_vec3 v2);
t_vec3			*addictive_inverse_vec(t_vec3 *v);

t_vec3			*mul_vec_scalar(t_vec3 *v, float f);
t_vec3			*div_vec_scalar(t_vec3 *v, float f);
float			vec_dot(t_vec3 v1, t_vec3 v2);
t_vec3			*vec_cross(t_vec3 v1, t_vec3 v2);

float			vec_length(t_vec3 v);
float			vec_normalize(t_vec3 *v);

#endif
