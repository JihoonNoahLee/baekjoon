/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1152.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:51:55 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:52:24 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	main(void)
{
	string	word;
	int		word_num = 0;
	bool	word_flag = false;

	getline(cin, word);
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] != ' ' && word_flag == false)
		{
			word_flag = true;
			word_num++;
		}
		else if (word[i] == ' ' && word_flag == true)
			word_flag = false;
	}
	cout << word_num;
	return (0);
}
