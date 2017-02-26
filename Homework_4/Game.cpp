//
//  Game.cpp
//  Homework_4
//
//  Created by Ryan Kojan on 2/22/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include "Game.hpp"

Game::Game(){

    int size = 5;
    int _pegs = 0;

    _gameBoard = new Node*[size];
    for (int i = 0 ; i < size ; i++) {
        _gameBoard[i] = new Node[5];
    }
    
    this->populateBoard();
}

void Game::populateBoard(){
    
    _gameBoard[1][0]._value = 1;
    _gameBoard[1][1]._value = 1;
    _gameBoard[1][2]._value = 1;
    _gameBoard[1][3]._value = 1;
    _gameBoard[1][4]._value = -1;
    
    _gameBoard[2][0]._value = 1;
    _gameBoard[2][1]._value = 1;
    _gameBoard[2][2]._value = 1;
    _gameBoard[2][3]._value = -1;
    _gameBoard[2][4]._value = -1;
    
    _gameBoard[3][0]._value = 1;
    _gameBoard[3][1]._value = 1;
    _gameBoard[3][2]._value = -1;
    _gameBoard[3][3]._value = -1;
    _gameBoard[3][4]._value = -1;
    
    _gameBoard[4][0]._value = 1;
    _gameBoard[4][1]._value = -1;
    _gameBoard[4][2]._value = -1;
    _gameBoard[4][3]._value = -1;
    _gameBoard[4][4]._value = -1;

    //this->printBord();
}


void Game::visitNode(int x, int y){
    _gameBoard[x][y]._visited = true;
}

void Game::dfs(){
    
    Node tempNode;
    
    for (int i = 4; 0 <= i; i--) {
        for (int j = 0; j < 5; j++) {
            if (_gameBoard[i][j]._value == -1) {
                continue;
            }
            
            if (_gameBoard[i][j]._visited == 0) {
                //
            }
            
        }
    }
}

bool Game::hasNodeBeenVisited(Node node){
    Node tempNode;
    
    if (tempNode._visited == 1) {
        return true;
    }else
        return false;
}

void Game::searchForMoves(Node node){
    Node tempNode;

}

void Game::printBord(){
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            std::cout << _gameBoard[i][j]._value << "." <<_gameBoard[i][j]._visited << " ";
            std::cout << std::endl;
    }
    std::cout << std::endl;
}