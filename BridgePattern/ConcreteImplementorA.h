//
//  ConcreteImplementorA.h
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//  — 实现 I m p l e m e n t o r 接口并定义它的具体实现。

#ifndef __BridgePattern__ConcreteImplementorA__
#define __BridgePattern__ConcreteImplementorA__

#include <iostream>
#include "Implementor.h"

class ConcreteImplementorA : public Implementor {
    
public:
    ConcreteImplementorA();
    virtual ~ConcreteImplementorA();
    void Operation();
};

#endif /* defined(__BridgePattern__ConcreteImplementorA__) */
