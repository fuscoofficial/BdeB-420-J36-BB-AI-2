#pragma once

#include "LeafNode.h"

namespace BehaviourTree
{
    class DummySuccess : public LeafNode
    {
    public:
        DummySuccess() = default;
        ~DummySuccess() override = default;

        NodeState tick() override;
    };
}
