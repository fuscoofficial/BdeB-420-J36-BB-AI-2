#pragma once
#include "Node.h"
#include <vector>
namespace BehaviourTree {

	class CompositeNode : public Node {

	public:
		virtual ~CompositeNode() {
			for (Node* node : _nodes) 
			{
				delete node;
			}
		}

	
	protected:
		CompositeNode() = default;
		std::vector<Node*> _nodes;
	};
}