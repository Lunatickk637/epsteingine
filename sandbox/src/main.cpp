#include <iostream>
#include <ostream>

#include "engine/GameBase.h"
#include "engine/Renderer.h"

using namespace MathUtils;

class Game : public GameBase {
    using GameBase::GameBase;

    void init() override {
        std::cout << "Game init" << std::endl;
    }
    void tick(const float delta) override {
        std::cout << delta << std::endl;
    }
    void render() override {
        Renderer::draw_rect(Vec2i(10, 20), Vec2i(20, 20));
    }
};


int main() {
    Game game = Game(MathUtils::Vec2i(640, 480), "renato");
    game.run();

    return 0;
}
