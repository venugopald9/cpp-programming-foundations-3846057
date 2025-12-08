// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class menu_selection {background, music, sound, controls, texture};

int main(){
    int menu = (int) menu_selection::sound;
    asset_type asset_value;

    asset_value = asset_type::sound;

    // std::cout << "asset_value of asset_type = " << (int) asset_value << std::endl;

    // std::cout << "menu of menu_selection = " << menu << std
    // ::endl;
    std::cout << (int)asset_type::animation;

    std::cout << std::endl << std::endl;
    return 0;
}
