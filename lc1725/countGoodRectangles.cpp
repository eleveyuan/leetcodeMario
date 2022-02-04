#include "countGoodRectangles.h"

int Solution::getWidth(const vector<int>& rectangle) {
    return rectangle[0] < rectangle[1] ? rectangle[0] : rectangle[1];
}

int Solution::countGoodRectangles(vector<vector<int> >& rectangles) {
    int len = rectangles.size();
    int ret = 0;
    int max = 0;
    for (int i = 0; i < len; i ++) {
        int width = getWidth(rectangles[i]);
        if (width > max) {
            max = width; 
            ret = 1;
        } else if (width == max) {
            ret ++;
        }
    }
    return ret;
}