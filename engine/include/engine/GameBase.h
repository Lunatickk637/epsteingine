
#pragma once
#ifndef EPSTEINGINE_ENGINE_H
#define EPSTEINGINE_ENGINE_H


#include <string>
#include "MathUtils.h"

class GameBase {
    MathUtils::Vec2i size;
    std::string title;

    virtual void init();
    virtual void tick(float delta);
    virtual void render();

public:
    GameBase(const MathUtils::Vec2i size_, std::string title_) : size(size_), title(std::move(title_)) {};
    virtual ~GameBase() = default;

    void run();
};


#endif //EPSTEINGINE_ENGINE_H