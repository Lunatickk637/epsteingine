
#pragma once
#ifndef EPSTEINGINE_MATH_H
#define EPSTEINGINE_MATH_H


namespace MathUtils {
    struct Vec2 {
        float x; float y;

        constexpr Vec2() : x(0), y(0) {}
        constexpr Vec2(float x_, float y_) : x(x_), y(y_) {}

        Vec2 operator+ (const Vec2& b) const { return {x + b.x, y + b.y}; }

    };
    struct Vec2i {
        int x; int y;

        constexpr Vec2i() : x(0), y(0) {}
        constexpr Vec2i(int x_, int y_) : x(x_), y(y_) {}

        Vec2i operator+ (const Vec2i& b) const { return {x + b.x, y + b.y}; }
    };


}

#endif //EPSTEINGINE_MATH_H