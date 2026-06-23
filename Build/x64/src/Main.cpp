#include <raylib.h>
#include <Code_Utilities_Light_v2.h>
#include "GameTest.h"
using namespace BdB;

int main()
{

	Core::GameTest{}.run();
	//TODO 
	//ETQ developpeur, je veux pouvoir creer un arbre de comportemen
	// - task1 reedr une classe abstraite Node qui sera la bas d e tous les noaeuds de l'arbre de comportement 
	// - task 2 creeer une classe compositienode qui sera la base de tous les noeuds composites ( sequence , selector, etc )
	// - task 3 creer une classe "LeafNode" qui sera la base de tous les noeuds feuilles ( action, condition, etc )
	// - task 4 creer une calsse behaviortree qui sera la base de l'arbre de comportement et qui contiendra la racine de l'arbre
	// task 5 : creer une classe "Sequence" qui sera un noeud composite qui execute ses enfants dans lorder jusqua ce qun enfant echout
	// task 6: creer une classe selector qui sera un noeud composite qui exeute ses enfants dans lordre jsuqua ce qun enfant reusise 
	//ETQ developpeur je veux pouvoir rajouter des noaeuds a mon arbre de comportement
	//ETQ dev je veux pouvoir executer mon arbre de comportement
	// //ETQ Game designer je veux pouvoir utiliser une interafce graphique  pour creer mon arbre de comportement
	//ETQ joueur, je veux pouvoir voir les NPC interagir avec l'environnement et les autres NPC

}
