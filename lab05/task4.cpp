#include <cstdio>

const int x = 2, y = 4, z = 3;
int m[x][y][z] 
{
    {
        {2, 2, 2},
        {3, 5, 7},
        {2, 2, 2},
        {2, 2, 2}
    },
    {
        {2, 2, 2},
        {4, 2, 1},
        {5, 6, 9},
        {1, 7, 9}
    }
};


int main() {
    // for (int i = 0; i < x; ++i) {
    //     for (int j = 0; j < y; ++j) {  
    //         scanf("%d %d %d", &m[i][j][0], &m[i][j][1], &m[i][j][2]);
    //     }
    //     printf("\n");
    // }
    // Check xy
    for (int l = 0; l < z; ++l) {
        int sample = m[0][0][l];
        int break_flag = 0;
        for (int i = 0; i < x; ++i)
            for (int j = 0; j < y; ++j) {
                if (m[i][j][l] != sample) {
                    break_flag = 1;
                    break;
                }
            }
        if (!break_flag) {
            printf("%d\n", sample);
            return 0;
        }
    }

    // Check xz
    for (int j = 0; j < y; ++j) {
        int sample = m[0][j][0];
        int break_flag = 0;
        for (int i = 0; i < x; ++i)
            for (int l = 0; l < z; ++l) {
                if (m[i][j][l] != sample) {
                    break_flag = 1;
                    break;
                }
            }
        if (!break_flag) {
            printf("%d\n", sample);
            return 0;
        }
    }

    // Check zy
    for (int i = 0; i < x; ++i) {
        int sample = m[i][0][0];
        int break_flag = 0;
        for (int l = 0; l < z; ++l)
            for (int j = 0; j < y; ++j) {
                if (m[i][j][l] != sample) {
                    break_flag = 1;
                    break;
                }
            }
        if (!break_flag) {
            printf("%d\n", sample);
            return 0;
        }
    }
    printf("No.\n");
    return 0;
}
