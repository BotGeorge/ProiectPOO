#include <raylib.h>
#include "Headers/game.h"
#include "Headers/colors.h"
#include <iostream>

double lastUpdateTime = 0;

bool EventTriggered(double interval){
    double currentTime = GetTime();
    if(currentTime - lastUpdateTime >= interval){
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main() {
    InitWindow(500, 620, "Tetris");

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);

    SetTargetFPS(60);

    Game game = Game();

    while(!WindowShouldClose())
    {
        game.PlayerInput();
        if(EventTriggered(0.2)){
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font, "Scor", {350, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Urmatorul", {320, 175}, 38, 2, WHITE);
        DrawTextEx(font, "block", {358, 210}, 38, 2, WHITE);
        if(game.gameOver)
        {
        DrawTextEx(font, "AI", {320, 450}, 38, 2, WHITE);
        DrawTextEx(font, "PIERDUT", {320, 490}, 38, 2, WHITE);
        DrawTextEx(font, ":((", {320, 530}, 38, 2, WHITE);}
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue);

        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);


        DrawTextEx(font, scoreText, {320 + (170 - textSize.x)/2, 65}, 38, 2, WHITE);
        DrawRectangleRounded({320, 255, 170, 180}, 0.3, 6, lightBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
