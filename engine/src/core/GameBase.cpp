#include "../../include/engine/GameBase.h"
#include "raylib.h"

void GameBase::init() {}
void GameBase::render() {}
void GameBase::tick(float delta) {}

void GameBase::run() {
    InitWindow(size.x, size.y, title.c_str());
    SetTargetFPS(60);

    init();
    while (!WindowShouldClose()) {
        tick(GetFrameTime());

        BeginDrawing();
        {
            ClearBackground(BLACK);
            render();
        }
        EndDrawing();
    }
}
