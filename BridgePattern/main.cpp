//
//  main.cpp
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//

#include <iostream>
#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    Implementor *impA = new ConcreteImplementorA();  //new ConcreteImplementorB();
    Abstraction *abstra = new RefinedAbstraction(impA);
    abstra->Operation();
    return 0;
}