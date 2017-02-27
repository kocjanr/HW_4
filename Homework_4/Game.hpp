//
//  Game.hpp
//  Homework_4
//
//  Created by Ryan Kojan on 2/22/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Node.hpp"
#include <string>
#include <iostream>
#include <Vector>
#include <Map>

class Game{

public:
    Game();
    void populateBoard();
    Node startingNode(int startingRowCordinate, int startingColumnCordinate);
    void printBord();
    void bfs(Node *node);
    void searchForAvilableChildNodes(Node node);
    void startGame();
    bool checkIfNodeIsVisited(Node node);
    void movePeg(Node node);
    
private:
    
    Node **_gameBoard;
    Node *_startingNode;
    std::map<char, int, int> _boardPositions;
    
};

#endif /* Game_hpp */
