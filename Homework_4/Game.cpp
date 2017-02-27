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
    
    _startingNode = new Node;

    _gameBoard = new Node*[size];
    for (int i = 0 ; i < size ; i++) {
        _gameBoard[i] = new Node[5];
    }
    
    this->populateBoard();
}

void Game::populateBoard(){
    
//    for (int i =0 ; i < 5; i++) {
//        for (int j = 4; 4 < 0; j--) {
//            //fill in board yo
//        }
//    }
    
    _gameBoard[0][0]._visited = true;
    
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

    this->printBord();
}

Node Game::startingNode(int startingRowCordinate, int startingColumnCordinate){
    Node tempNode;
    
    tempNode._rowCordinate = startingRowCordinate;
    tempNode._rowCordinate = startingColumnCordinate;
    tempNode._visited = true;
    
    return tempNode;
}

void Game::startGame(){
    bfs(_startingNode);
}

void Game::bfs(Node *node){
    Node tempNode;
    Node currentNode;
    tempNode = *node;

    for (int i = 0 ; i < 5; i++) {
        for (int j = 0; j < 5; i++) {
            currentNode = _gameBoard[i][j];
            
            if (currentNode._value == -1) {
                continue;
            }
            
            if (checkIfNodeIsVisited(currentNode) == false) {
                searchForAvilableChildNodes(currentNode);
            }
        }
    }
}

void Game::searchForAvilableChildNodes(Node node){
    Node currentNode = node;
    Node currdentNodeLeftChild;
    Node currentNodeRightChild;
    
//    int currentNodeRowCordinate = currentNode._rowCordinate;
//    int currentNodeColumnCordinate = currentNode._columnCordinate;
    
    
    int currentNodeLeftChild = (currentNode._rowCordinate) + 1;
    int currentNodeRightChild = (currentNode._columnCordinate) + 1;
    
//    if (_gameBoard[currentNodeLeftChild][node._rowCordinate]._visited == false ) {
//        if (_gameBoard[currentNodeLeftChild+1][node._rowCordinate]._visited == false) {
//            _gameBoard[currentNode._rowCordinate][currentNode._columnCordinate]._value = 0;
//            _gameBoard[currentNode._rowCordinate][currentNode._columnCordinate]._visited = true;
//        }
//    }
    
}

bool Game::checkIfNodeIsVisited(Node node){

    if (node._visited == true) {
        return true;
    } else
        return false;
}

void Game::printBord(){
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            std::cout << _gameBoard[i][j]._value << "." <<_gameBoard[i][j]._visited << " ";
            std::cout << std::endl;
    }
    std::cout << std::endl;
}