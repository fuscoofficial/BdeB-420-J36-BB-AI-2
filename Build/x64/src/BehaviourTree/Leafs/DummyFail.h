#pragma once

#include "LeafNode.h"

namespace BehaviourTree
{
    class DummyFail : public LeafNode
    {
    public:
        DummyFail() = default;
        ~DummyFail() override = default;

        NodeState tick() override;
    };
}
