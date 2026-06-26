#include "BehaviourTree.h"

#include "Composites/Selector.h"
#include "Composites/Sequence.h"
#include "Leafs/DummyFail.h"
#include "Leafs/DummySuccess.h"

namespace BehaviourTree
{
    BehaviourTree::~BehaviourTree()
    {
        delete _rootNode;
    }

    NodeState BehaviourTree::tick() const
    {
        if (_rootNode)
        {
            return _rootNode->tick();
        }

        return NodeState::FAILURE;
    }

    void BehaviourTree::buildTestTree()
    {
        delete _rootNode;

        Selector* rootSelector = new Selector();

        Sequence* firstSequence = new Sequence();
        firstSequence->addChild(new DummySuccess());
        firstSequence->addChild(new DummyFail());
        firstSequence->addChild(new DummySuccess());

        Sequence* secondSequence = new Sequence();

        Selector* nestedSelector = new Selector();
        nestedSelector->addChild(new DummyFail());
        nestedSelector->addChild(new DummySuccess());

        secondSequence->addChild(nestedSelector);
        secondSequence->addChild(new DummySuccess());

        rootSelector->addChild(firstSequence);
        rootSelector->addChild(secondSequence);
        rootSelector->addChild(new DummyFail());

        _rootNode = rootSelector;
    }
}