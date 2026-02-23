/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:28:16 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 02:30:24 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn void ft_ultimate_div_mod(int *a, int *b)
 * @brief Calculates division and modulo, overwriting the original values.
 * @details Divides the value pointed to by 'a' by the value pointed to by 'b'.
 * The quotient is stored in 'a', and the remainder is stored in 'b'. Uses
 * temporary variables to prevent data loss during calculation.
 * @param a Pointer to the dividend (will be overwritten with the quotient).
 * @param b Pointer to the divisor (will be overwritten with the remainder).
 */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;

	if (*b != 0)
	{
		result = *a / *b;
		remainder = *a % *b;
		*a = result;
		*b = remainder;
	}
}
