#include "splash.hpp"

namespace deeep {
    Splash::Splash(){
        ge::data->config.load("./res/config/defaults.config");
        ge::data->config.setGroup("splash");

        SDL_Texture *sheet;
        SDL_Rect bounds;
        int scale;

        ge::data->config.get(GE_VAR_STR(sheet));
        ge::data->config.get(GE_VAR_STR(bounds));
        ge::data->config.get(GE_VAR_STR(scale));

        title = new ge::Sprite(sheet, bounds, scale);

    }

    Splash::~Splash(){ delete title; }

    void Splash::update(){}


    void Splash::render(){
        title->draw();
    }
}