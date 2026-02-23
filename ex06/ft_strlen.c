/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:42:51 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 02:39:12 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_strlen(char *str)
 * @brief Calculates the length of a string.
 * @details Includes a safety check to prevent dereferencing a NULL pointer.
 * Iterates through the string using an integer index until it reaches the 
 * null-terminator ('\0'), keeping count of the characters.
 * @param str A pointer to the first character of the string.
 * @return The number of characters in the string, or 0 if the pointer is NULL.
 */
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (str)
		while (str[len] != '\0')
			len++;
	return (len);
}
