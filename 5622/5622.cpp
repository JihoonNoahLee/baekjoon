/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5622.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:39:05 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:39:16 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	main(void)
{
	string	word;
	int		div;
	int		result = 0;

	cin >> word;
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] < 'S')
			div = (word[i] - 'A') / 3;
		else if (word[i] >= 'S' && word[i] < 'Z')
			div = (word[i] - 'A' - 1) / 3;
		else
			div = 7;
		result += (3 + div);
	}
	cout << result;
	return (0);
}
