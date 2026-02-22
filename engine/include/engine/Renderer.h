//
// Created by User on 22/02/2026.
//
#pragma once
#ifndef EPSTEINGINE_RENDERER_H
#define EPSTEINGINE_RENDERER_H

#include "MathUtils.h"

class Renderer {

public:
    static void draw_rect(MathUtils::Vec2i size, MathUtils::Vec2i position);
};


#endif //EPSTEINGINE_RENDERER_H