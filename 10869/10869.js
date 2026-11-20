/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10869.js                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:45:26 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/21 01:50:36 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const add = (num1, num2) => num1 + num2;
const subtract = (num1, num2) => num1 - num2;
const multiply = (num1, num2) => num1 * num2;
const divide = (num1, num2) => parseInt(num1 / num2, 10);
const modulo = (num1, num2) => num1 % num2;

function main() {
  const fs = require("fs");
  const input = fs.readFileSync("/dev/stdin").toString().split(" ");

  a = parseInt(input[0]);
  b = parseInt(input[1]);
  console.log(add(a, b));
  console.log(subtract(a, b));
  console.log(multiply(a, b));
  console.log(divide(a, b));
  console.log(modulo(a, b));
}

main();
