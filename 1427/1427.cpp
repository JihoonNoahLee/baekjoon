/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1427.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:43:45 by jihoolee          #+#    #+#             */
/*   Updated: 2021/12/27 23:55:01 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

void	print_sorted(const std::string& input)
{
	std::vector<int>	freq(10, 0);

	for (int idx = 0; idx < input.size(); idx++)
		freq[input[idx] - '0']++;
	for (int num = 9; num >= 0; num--)
	{
		for (int to_show = freq[num]; to_show > 0; to_show--)
			std::cout << num;
	}
	std::cout << std::endl;
}

int	main(void)
{
	std::string	input;

	std::cin >> input;
	print_sorted(input);
	return (0);
}
