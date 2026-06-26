#include "DummySuccess.h"

#include "raylib.h"

namespace BehaviourTree
{
    NodeState DummySuccess::tick()
    {
        TraceLog(LOG_INFO, "DummySuccess: SUCCESS");
        return NodeState::SUCCESS;
    }
}
