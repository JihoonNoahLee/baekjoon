/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10809.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:47:17 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:47:18 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

#define alphabet "abcdefghijklmnopqrstuvwxyz"

int	main(void)
{
	string	word;
	int		idx[26];

	cin >> word;
	for (int i = 0; i < 26; i++)
	{
		idx[i] = -1;
		for (int j = 0; j < word.size() && idx[i] == -1; j++)
			if (alphabet[i] == word[j])
				idx[i] = j;
		cout << idx[i] << " ";
	}
	return (0);
}
