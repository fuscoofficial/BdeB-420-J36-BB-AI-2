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
	
		BehaviourTree(const BehaviourTree&) = delete;
		BehaviourTree& operator=(const BehaviourTree&) = delete;

		NodeState tick() const;
		void buildTestTree();
	
	
	};
}