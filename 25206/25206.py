# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    25206.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 17:52:22 by jihoolee          #+#    #+#              #
#    Updated: 2023/05/07 19:03:38 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SUBJECT_CNT = 20


def calc_gpa(grades):
    MARK_STANDARD = {
        'A+': 4.5,
        'A0': 4.0,
        'B+': 3.5,
        'B0': 3.0,
        'C+': 2.5,
        'C0': 2.0,
        'D+': 1.5,
        'D0': 1.0,
        'F': 0.0
    }
    grade_sum = 0
    credit_sum = 0

    for (credit, grade) in grades:
        if grade == 'P':
            continue
        credit_sum += credit
        grade_sum += credit * MARK_STANDARD[grade]
    return grade_sum / credit_sum


def main():
    grades = []
    for _ in range(SUBJECT_CNT):
        _, credit, grade = input().split()
        grades.append((float(credit), grade))
    print(calc_gpa(grades))


if (__name__ == '__main__'):
    main()
