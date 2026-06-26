#include "DummyFail.h"

#include "raylib.h"

namespace BehaviourTree
{
    NodeState DummyFail::tick()
    {
        TraceLog(LOG_INFO, "DummyFail: FAILURE");
        return NodeState::FAILURE;
    }
}
