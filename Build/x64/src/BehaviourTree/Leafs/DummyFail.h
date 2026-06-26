#pragma once

#include "../Core/LeafNode.h"

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
