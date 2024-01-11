#pragma once
#include "grid.h"
#include "../Src/blocks.cpp"

class Game{
public:
    Game();
    void Draw();
    void PlayerInput();
    void MoveBlockDown();
    bool gameOver;
    int score;
private:
    Grid grid;
    void MoveBlockLeft();
    void MoveBlockRight();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    bool checkOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int LinesCleared, int moveDownPoints);
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};