//
//  RefinedAbstraction.cpp
//  BridgePattern
//
//  Created by Kira on 11/8/12.
//  Copyright (c) 2012 Kira. All rights reserved.
//

#include "RefinedAbstraction.h"
void RefinedAbstraction::RefinedOperation()
{
    if (imp != NULL) {
        imp->Operation();
    }
}