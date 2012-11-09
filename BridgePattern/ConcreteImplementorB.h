//
//  ConcreteImplementor.h
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//  — 实现 I m p l e m e n t o r 接口并定义它的具体实现。

#ifndef __BridgePattern__ConcreteImplementor__
#define __BridgePattern__ConcreteImplementor__

#include <iostream>
#include "Implementor.h"

class ConcreteImplementorB : public Implementor{
public:
    ConcreteImplementorB();
    virtual ~ConcreteImplementorB();
    void Operation();
};

#endif /* defined(__BridgePattern__ConcreteImplementor__) */
