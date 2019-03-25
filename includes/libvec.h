/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvec.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 19:36:45 by rporcu            #+#    #+#             */
/*   Updated: 2019/03/25 10:17:08 by rporcu           ###   ########.fr       */
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

t_vec3			v3(float x, float y, float z);

t_vec3			v3_add(t_vec3 v1, t_vec3 v2);
t_vec3			v3_sub(t_vec3 v1, t_vec3 v2);
t_vec3			v3_mul(t_vec3 v1, t_vec3 v2);
t_vec3			v3_scale(t_vec3 v1, float f);
t_vec3			v3_divide(t_vec3 v1, float f);

float			v3_dot(t_vec3 v1, t_vec3 v2);
t_vec3			v3_cross(t_vec3 v1, t_vec3 v2);
t_vec3			v3_neg(t_vec3 v1);

float			v3_len(t_vec3 v);
float			v3_len2(t_vec3 v);
float			v3_normalize(t_vec3 *v);

#endif
