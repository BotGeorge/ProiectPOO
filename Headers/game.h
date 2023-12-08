#pragma once
#include "grid.h"
#include "../Src/blocks.cpp"

class Game{
public:
    Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void PlayerInput();
    void MoveBlockLeft();
    void MoveBlockRight();
    void MoveBlockDown();
    Grid grid;
private:
    bool checkOutside();
    void RotateBlock();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};