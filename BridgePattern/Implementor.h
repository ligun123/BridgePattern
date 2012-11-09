//
//  Implementor.h
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//  — 定义实现类的接口,该接口不一定要与 A b s t r a c t i o n 的 接 口 完 全 一 致 ; 事 实 上 这 两 个 接口可以完全不同。一般来讲, I m p l e m e n t o r接口仅提供基本操作,而 A b s t r a c t i o n则 定义了基于这些基本操作的较高层次的操作。

#ifndef __BridgePattern__Implementor__
#define __BridgePattern__Implementor__

#include <iostream>

class Implementor {
    
public:
    Implementor(){};
    virtual ~Implementor(){};
    virtual void Operation();
};

#endif /* defined(__BridgePattern__Implementor__) */
