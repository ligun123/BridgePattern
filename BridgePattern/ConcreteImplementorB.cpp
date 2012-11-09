//
//  ConcreteImplementor.cpp
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//

#include "ConcreteImplementorB.h"
ConcreteImplementorB::ConcreteImplementorB()
{}
ConcreteImplementorB::~ConcreteImplementorB()
{}
void ConcreteImplementorB::Operation()
{
    printf("ConcreteImplementorB::%s", __func__);
}