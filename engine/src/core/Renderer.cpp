//
// Created by User on 22/02/2026.
//

#include "../../include/engine/Renderer.h"

#include "raylib.h"

void Renderer::draw_rect(MathUtils::Vec2i position, MathUtils::Vec2i size) {
    DrawRectangle(position.x, position.y, size.x, size.y, WHITE);
}
