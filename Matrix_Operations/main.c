/**
 * @file main.c
 * @brief Entry point for matrix operation performance evaluation.
 */

#include "matrix_ops.h"
#include <stdio.h>

/**
 * @brief Main function to execute matrix operations.
 * @return int Exit status.
 */
int main() {
    printf("Evaluation: N=%d, type=%s, BL=%d\n", N, STR(TYPE), BL);

    // Execute matrix operations
    zero_vector();
    copy_matrix_ij();
    copy_matrix_ji();
    add_matrix_ij();
    add_matrix_ji();
    scalar_product();
    scalar_product_opt();
    matrix_mult_ijk();
    matrix_mult_ikj();
    matrix_mult_blocked();
    matrix_mult_trans_ijk();
    
    return 0;
}
