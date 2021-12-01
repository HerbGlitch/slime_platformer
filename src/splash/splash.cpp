#include "splash.hpp"

namespace deeep {
    Splash::Splash(): time(0.00f){
        ge::data->config.load("./res/config/defaults.config");
        ge::data->config.setGroup("splash");

        SDL_Texture *sheet;
        SDL_Rect bounds;
        int scale;

        ge::data->config.get(GE_VAR_STR(sheet));
        ge::data->config.get(GE_VAR_STR(bounds));
        ge::data->config.get(GE_VAR_STR(scale));

        title = new ge::Sprite(sheet, bounds, scale);
        title->setPos(SDL_Point {
            ge::data->windowSize.w / 2 - title->getCenter().x,
            ge::data->windowSize.h / 2 - title->getCenter().y
        });
    }

    Splash::~Splash() { delete title; }

    void Splash::update(){
        time += ge::data->dt;
        if(time > 2){ ge::data->state.add(new Menu(), true); } //TODO: for release change to 2000
    }

    void Splash::render(){
        title->draw();
    }
}