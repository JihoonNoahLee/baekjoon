/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10699.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:29:18 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/02 16:32:02 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    time_t      t = time(NULL);
    struct tm  tm;

    localtime_r(&t, &tm);
    int year = tm.tm_year + 1900;
    int month = tm.tm_mon + 1;
    int day = tm.tm_mday;

    std::cout << std::setfill('0') << std::setw(4) << year << "-"
              << std::setw(2) << month << "-"
              << std::setw(2) << day << std::endl;

    return 0;
}
