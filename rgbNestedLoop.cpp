// Copyright (c) 2022 Nathan A All rights reserved.
// .
// Created by: Nathan A
// Date: Nov.17, 2022
// This program displays all the possible RGB colors

#include <iostream>
#include <string>

int main() {
    // for loop to determine the red ID
    for (int red = 0; red <= 255; red++) {
        // for loop to determine the green ID
        for (int green = 0; green <= 255; green++) {
            // for loop to determine the blue ID
            for (int blue = 0; blue <= 255; blue++)
                std::cout << "(" << red << "," << green << "," << blue << ")\n";
        }
    }
}
