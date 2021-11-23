/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1436.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:01:02 by jihoolee          #+#    #+#             */
/*   Updated: 2021/11/23 16:07:37 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

bool	has_666(int num)
{
	string	num_str = to_string(num);

	for (int i = 0; i + 2 < num_str.size(); i++)
		if (num_str[i] == '6' && num_str[i + 1] == '6' && num_str[i + 2] == '6')
			return (true);
	return (false);
}

int	get_nth_end(int n)
{
	int	end_cnt = 1;
	int	num = 666;

	while (end_cnt != n)
	{
		num++;
		if (has_666(num))
			end_cnt++;
	}
	return (num);
}

int	main(void)
{
	int	n;

	cin >> n;
	cout << get_nth_end(n);
	return (0);
}
