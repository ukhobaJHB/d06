/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:10:41 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/26 14:36:32 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		difference;

	difference = 0;

	while	(*s1 != '\0' && *s2 != '\0' && *s1 == *s2){
		if		(*s1 > *s2)
		{
			difference = 1;
		}
		else if	(*s1 < *s2)
		{
			difference = -1;
		}
		s1++;
		s2++;
	}

	return difference;
}
