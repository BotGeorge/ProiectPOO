#pragma once
#include <vector>
#include <raylib.h>

class Grid{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    bool checkInside(int row, int column);
    int grid[20][20];

private:
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;

};