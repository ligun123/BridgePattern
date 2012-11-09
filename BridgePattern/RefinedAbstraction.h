//
//  RefinedAbstraction.h
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//  — 扩充由 A b s t r a c t i o n 定义的接口。

#ifndef __BridgePattern__RefinedAbstraction__
#define __BridgePattern__RefinedAbstraction__

#include <iostream>
#include "Abstraction.h"

class RefinedAbstraction : public Abstraction {
    
public:
    RefinedAbstraction(Implementor *_imp):Abstraction(_imp){};
    void RefinedOperation();
};

#endif /* defined(__BridgePattern__RefinedAbstraction__) */
