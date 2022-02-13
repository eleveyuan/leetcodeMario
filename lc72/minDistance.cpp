#include "minDistance.h"

int Solution::minDistance(string word1, string word2) {
    /**
     * 字符串编辑可进行：插入 删除 替换
     */
    int lw1 = word1.size(), lw2 = word2.size();
    
    if (lw1 == 0 || lw2 == 0) return lw1 + lw2;

    // 中间状态存储空间
    int **status;
    status = new int*[lw1+1];
    for(int i = 0; i <= lw1; i ++) status[i] = new int[lw2+1];

    for (int i = 0; i <= lw1; i ++) status[i][0] = i;
    for (int i = 0; i <= lw2; i ++) status[0][i] = i;

    for (int i = 1; i <= lw1; i ++) {
        for(int j = 1; j <=lw2; j ++) {
            int status_i_j_1 = status[i][j-1] + 1;
            int status_i_1_j = status[i-1][j] + 1;
            int status_i_1_j_1 = word1[i-1] != word2[j-1] ? status[i-1][j-1] + 1 : status[i-1][j-1];
            status[i][j] = min(status_i_j_1, min(status_i_1_j, status_i_1_j_1));
        }
    }
    return status[lw1][lw2];
}