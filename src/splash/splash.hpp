#pragma once
#include <ge.hpp>
#include "../menu/menu.hpp"

namespace deeep {
    class Splash : public ge::State {
    public:
        Splash();
        ~Splash();

        void update();
        void render();

    private:
        ge::Sprite *title;

        float time;
    };
}