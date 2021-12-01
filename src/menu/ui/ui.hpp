#pragma once
#include <ge.hpp>

namespace deeep {
    class Ui {
    public:
        Ui();
        ~Ui();

        void update();
        void render();

    private:
        ge::Sprite *title;
    };
}