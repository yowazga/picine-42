/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:50:53 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 16:31:37 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *a / *b;
	*b = s % *b;
}

/*
int main()
{
	int a;
	int b;

	a = 42;
	b = 24;
	ft_ultimate_div_mod(&a, &b);
	return 0;
}
*/