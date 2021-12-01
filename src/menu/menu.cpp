#include "menu.hpp"

namespace deeep {
    Menu::Menu(){
        /*
        ge::data->config.selectSheet("sheet");
        ge::data->config.setGroup("btn");

        ge::data->config.get(GE_VAR_STR(box));
        ge::data->config.get(GE_VAR_STR(btnM));
        ge::data->config.get(GE_VAR_STR(btnText));
        */
        ge::data->config.setGroup("menu");
        SDL_Texture *sheet;
        int scale;

        ge::data->config.get(GE_VAR_STR(sheet));
        ge::data->config.get(GE_VAR_STR(scale));

        ge::data->config.setGroup("btnBounds");
        SDL_Rect start;
        SDL_Rect options;
        SDL_Rect exit;

        SDL_Rect boxTop;
        SDL_Rect boxCenter;
        SDL_Rect boxBottom;

        ge::data->config.get(GE_VAR_STR(start));
        ge::data->config.get(GE_VAR_STR(options));
        ge::data->config.get(GE_VAR_STR(exit));

        btnText.start = new ge::Sprite(sheet, start, scale);
        btnText.options = new ge::Sprite(sheet, options, scale);
        btnText.exit = new ge::Sprite(sheet, exit, scale);
    }

    Menu::~Menu(){
        delete btnText.start;
        delete btnText.options;
        delete btnText.exit;

        delete box.top;
        delete box.center;
        delete box.bottom;
    }

    void Menu::update(){
        
    }

    void Menu::render(){
        btnText.start->draw();
        btnText.options->draw();
        btnText.exit->draw();
    }
}