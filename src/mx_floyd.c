#include "path.h"

void mx_floyd(int ***mxw, int size) {
    int **mxW = *mxw;

    for (int k = 0; k < size; k++)
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                if (mxW[i][j] > mxW[i][k] + mxW[k][j])
                    mxW[i][j] = mxW[i][k] + mxW[k][j];
}
