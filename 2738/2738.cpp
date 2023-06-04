/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2738.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:38:30 by jihoolee          #+#    #+#             */
/*   Updated: 2023/05/15 02:29:22 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

typedef std::vector<std::vector<int> >  Matrix;

void print_matrix(const Matrix& mat) {
  for (Matrix::const_iterator row_it = mat.cbegin();
        row_it != mat.cend();
        ++row_it) {
    for (std::vector<int>::const_iterator col_it = row_it->cbegin();
          col_it != row_it->cend();
          ++col_it)
      std::cout << *col_it << ' ';
    std::cout << '\n';
  }
}

Matrix add_matrix(const Matrix& A, const Matrix& B) {
  Matrix  result(A.size());

  for (int row_idx = 0; row_idx < A.size(); ++row_idx) {
    std::vector<int>  temp_vec(A[row_idx].size());

    for (int col_idx = 0; col_idx < A[row_idx].size(); ++col_idx) {
      temp_vec[col_idx] = A[row_idx][col_idx] + B[row_idx][col_idx];
    }
    result[row_idx].swap(temp_vec);
  }
  return result;
}

void get_input(Matrix* mat, int row, int col) {
  for (int row_idx = 0; row_idx < row; ++row_idx) {
    std::vector<int> temp_vec(col);

    for (int col_idx = 0; col_idx < col; ++col_idx)
      std::cin >> temp_vec[col_idx];
    mat->at(row_idx).swap(temp_vec);
  }
}

int main(void) {
  int row;
  int col;
  std::cin >> row >> col;
  Matrix  A(row);
  Matrix  B(row);

  get_input(&A, row, col);
  get_input(&B, row, col);
  print_matrix(add_matrix(A, B));
  return 0;
}
