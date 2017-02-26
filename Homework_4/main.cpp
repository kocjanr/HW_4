//
//  main.cpp
//  Homework_4
//
//  Created by Ryan Kojan on 2/22/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include <iostream>
#include "Game.hpp"

int main(int argc, const char * argv[]) {
    Game *newGame = new Game();
    
    newGame->dfs();
    
    return 0;
}
