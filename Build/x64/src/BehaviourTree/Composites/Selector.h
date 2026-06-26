#pragma once

#include "CompositeNode.h"

namespace BehaviourTree
{
    class Selector : public CompositeNode
    {
    public:
        Selector() = default;
        ~Selector() override = default;

        NodeState tick() override;
    };
}
