#include "Selector.h"

namespace BehaviourTree
{
    NodeState Selector::tick()
    {
        for (Node* node : _nodes)
        {
            const NodeState childState = node->tick();

            if (childState == NodeState::SUCCESS)
            {
                return NodeState::SUCCESS;
            }

            if (childState == NodeState::RUNNING)
            {
                return NodeState::RUNNING;
            }
        }

        return NodeState::FAILURE;
    }
}
