//
//  Node.hpp
//  Homework_4
//
//  Created by Ryan Kojan on 2/22/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <string>

class Node{
    
public:
    Node();
    
    std::string _label;
    bool _visited;
    int _value;
    int _rowCordinate;
    int _columnCordinate;
};

#endif /* Node_hpp */
