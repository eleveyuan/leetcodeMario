#ifndef __countgoodrectangles_h
#define __countgoodrectangles_h

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int getWidth(const vector<int>& rectangle);
    int countGoodRectangles(vector<vector<int> >& rectangles); // 可以形成最大正方形的矩形数目
};

#endif 