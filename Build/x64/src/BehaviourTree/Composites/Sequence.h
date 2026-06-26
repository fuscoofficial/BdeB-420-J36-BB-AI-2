#pragma once

#include "CompositeNode.h"

namespace BehaviourTree
{
    class Sequence : public CompositeNode
    {
    public:
        Sequence() = default;
        ~Sequence() override = default;

        NodeState tick() override;
    };
}