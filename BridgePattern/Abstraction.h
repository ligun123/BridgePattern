//
//  Abstraction.h
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//  — 定义抽象类的接口。
//  — 维护一个指向 I m p l e m e n t o r 类型对象的指针。

#ifndef __BridgePattern__Abstraction__
#define __BridgePattern__Abstraction__

#include <iostream>
#include "Implementor.h"

class Abstraction {
public:
    Abstraction(Implementor *tempImp = NULL):imp(tempImp){};
    virtual ~Abstraction(){
        delete imp;
        imp = NULL;
    };
    
    void Operation();
    
protected:
    Implementor *imp;
};

#endif /* defined(__BridgePattern__Abstraction__) */
