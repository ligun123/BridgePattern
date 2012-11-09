//
//  ConcreteImplementorA.cpp
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//

#include "ConcreteImplementorA.h"
ConcreteImplementorA::ConcreteImplementorA()
{}
ConcreteImplementorA::~ConcreteImplementorA()
{}
void ConcreteImplementorA::Operation()
{
    Implementor::Operation();
    printf("ConcreteImplementorA::%s\n", __FUNCTION__);
}