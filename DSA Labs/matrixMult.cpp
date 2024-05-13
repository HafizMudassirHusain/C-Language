#include <iostream>

int main() {
    int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    std::cout << "Enter the number of rows and columns of the first matrix\n";
    std::cin >> m >> n;
    std::cout << "Enter the elements of the first matrix\n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            std::cin >> first[c][d];

    std::cout << "Enter the number of rows and columns of the second matrix\n";
    std::cin >> p >> q;

    if (n != p)
        std::cout << "Matrices with entered orders can't be multiplied with each other.\n";
    else {
        std::cout << "Enter the elements of the second matrix\n";

        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                std::cin >> second[c][d];

        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++) {
                for (k = 0; k < p; k++) {
                    sum = sum + first[c][k] * second[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        std::cout << "Product of entered matrices:-\n";

        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++)
                std::cout << multiply[c][d] << "\t";

            std::cout << "\n";
        }
    }

    return 0;
}

