#include "Sequence.h"

namespace BehaviourTree
{
    NodeState Sequence::tick()
    {
        for (Node* node : _nodes)
        {
            const NodeState childState = node->tick();

            if (childState == NodeState::FAILURE)
            {
                return NodeState::FAILURE;
            }

            if (childState == NodeState::RUNNING)
            {
                return NodeState::RUNNING;
            }
        }

        return NodeState::SUCCESS;
    }
}