#include <ge.hpp>

namespace deeep {
    class Splash : public ge::State {
    public:
        Splash();
        ~Splash();

        void update();
        void render();

    private:
        ge::Sprite *title;

    };
}