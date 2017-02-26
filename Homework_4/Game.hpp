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
    ~Game();
    void populateBoard();
    void printBord();
    void dfs();
    void searchForMoves(Node node);
    void visitNode(int startingX, int startingY);
    bool hasNodeBeenVisited(Node node);
    
private:
    
    Node **_gameBoard;
    std::vector<Node> _possibleMoves;
    std::map<std::string, int, int> _pegNamesAndPositions;
    int _moves;
    int _pegs;
    int _pegCount;
    
};

#endif /* Game_hpp */
