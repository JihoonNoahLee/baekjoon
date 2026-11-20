/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1001.js                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:33:18 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/21 01:40:01 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

function subtract(num1, num2) {
  return num1 - num2;
}

function main() {
  const fs = require("fs");
  const input = fs.readFileSync("/dev/stdin").toString().split(" ");

  a = parseInt(input[0]);
  b = parseInt(input[1]);
  console.log(subtract(a, b));
}

main();
