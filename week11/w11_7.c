#include <stdio.h>

// Định nghĩa số lượng nhân viên
#define N 5

// Định nghĩa mức lương hiện tại của nhân viên
double salaries[N] = {1000, 2000, 3000, 4000, 5000};

// Định nghĩa năm bắt đầu làm việc của nhân viên
int start_years[N] = {2010, 2011, 2012, 2013, 2014};

// Định nghĩa năm hiện tại
int current_year = 2023;

// Định nghĩa hàm để tăng lương
double increase_salary(int start_year, double current_salary) {
    // Tính số năm nhân viên đã làm việc
    int years_worked = current_year - start_year;

    // Nếu nhân viên đã làm việc ít nhất 3 năm
    if (years_worked >= 3) {
        // Tính số lần lương nên được tăng
        int num_increases = years_worked / 3;

        // Tăng lương
        for (int i = 0; i < num_increases; i++) {
            current_salary *= 1.01;
        }
    }

    // Trả về mức lương đã được tăng
    return current_salary;
}

int main() {
    // Sử dụng vòng lặp for để tăng lương cho mỗi nhân viên
    for (int i = 0; i < N; i++) {
        // Tăng lương cho nhân viên
        salaries[i] = increase_salary(start_years[i], salaries[i]);
    }

    // In ra mức lương đã tăng
    for (int i = 0; i < N; i++) {
        printf("Mức lương của nhân viên %d giờ đây là %.2f\n", i+1, salaries[i]);
    }

    return 0;
}

