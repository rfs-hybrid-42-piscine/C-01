/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:48:29 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 02:29:38 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn void ft_ultimate_ft(int *********nbr)
 * @brief Sets the value of an integer to 42 using 9 levels of indirection.
 * @details Dereferences a chain of 9 pointers to reach the base integer
 * and assigns it the specific value of 42.
 * @param nbr A pointer to a pointer (x9) to an integer.
 */
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
