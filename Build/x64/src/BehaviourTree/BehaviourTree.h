#pragma once
#include "Core/Node.h"

namespace BehaviourTree {

	class BehaviourTree 
	{

	private:
		Node* _rootNode = nullptr;

	public:
		BehaviourTree()= default;
		~BehaviourTree();
	
		NodeState tick() const{

			if(_rootNode)
				return _rootNode->tick();
			return NodeState::FAILURE;
		}
	
		void buildTestTree();
	
	
	};
}