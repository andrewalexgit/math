//
//  main.cpp
//  Lab
//
//  Created by AndrewCampagna on 6/7/18.
//  Copyright © 2018 Andrew Campagna. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Establish matricies and all unsused variables
    int m, n, p, q;
    bool flag;
    
    int matrix_A[3][2] = { {3,-1},
                           {2,1},
                           {-2,4} };
    
    int matrix_B[2][2] = { {1,2},
                           {0,1} };
    
    // Initialize all unused variables
    m = sizeof(matrix_A)/sizeof(*matrix_A);
    n = sizeof(matrix_A[0])/sizeof(*matrix_A[0]);
    p = sizeof(matrix_B)/sizeof(*matrix_B);
    q = sizeof(matrix_B[0])/sizeof(*matrix_B[0]);
    
    // Compare both dimensions to check if program is able to multiply
    flag = (n == p) ? 1 : 0;
    
    if (!flag) {
        cout << "Matricies are unable to be multiplied" << endl;
    }
    
    // The algorithm
    int multiplier[n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            multiplier[j] = matrix_A[i][j];
        }
        for (int z = 0; z < q; z++) {
            int _temp = 0;
            for (int k = 0; k < (sizeof(multiplier)/sizeof(*multiplier)); k++) {
                _temp += multiplier[k] * matrix_B[k][z];
            }
            cout << _temp << ", ";
        }
        cout << endl;
    }
    
    return 0;
}
