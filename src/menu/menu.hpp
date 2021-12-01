#pragma once
#include <ge.hpp>

namespace deeep {
    class Menu : public ge::State {
    public:
        Menu();
        ~Menu();

        void update();
        void render();
    
    private:
        struct {
            ge::Sprite *start;
            ge::Sprite *options;
            ge::Sprite *exit;
        } btnText;

        struct {
            ge::Sprite *normal;
            ge::Sprite *hover;
            ge::Sprite *press;
        } btnM;

        struct {
            ge::Sprite *top;
            ge::Sprite *center;
            ge::Sprite *bottom;
        } box;
    };
}