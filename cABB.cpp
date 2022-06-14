#include <iostream>

#include "cNode.h"
#include "cABB.h"


// ***********************************************
// ******                                   ******
// ***********************************************
cABB::cABB() {

	root = NULL;

}

// ***********************************************
// ******                                   ******
// ***********************************************
cABB::cABB(std::vector<int> v) {

	root = NULL;

	for (unsigned int i = 0 ; i < v.size() ; i++)
		insertNodeRec(&root, v[i]);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cABB::preOrderTraversal() {

	preOrderTravRec(root);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cABB::preOrderTravRec(cNode* r) {

	if (r != NULL) {
		std::cout << r->getData() << std::endl;
		preOrderTravRec(r->getLeftChild());
		preOrderTravRec(r->getRightChild());
		}
	else 
		std::cout << "."<< std::endl;	

}

// ***********************************************
// ******                                   ******
// ***********************************************

void cABB::inOrderTraversal() {

	inOrderTravRec(root);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cABB::inOrderTravRec(cNode* r) {

	if (r != NULL) {
		inOrderTravRec(r->getLeftChild());
		std::cout << r->getData() << std::endl;
		inOrderTravRec(r->getRightChild());
		}
	else 
		std::cout << "."<< std::endl;	

}

// ***********************************************
// ******                                   ******
// ***********************************************

void cABB::posOrderTraversal() {

	posOrderTravRec(root);
}

// ***********************************************
// ******                                   ******
// ***********************************************
void cABB::posOrderTravRec(cNode* r) {

	if (r != NULL) {
		posOrderTravRec(r->getLeftChild());
		posOrderTravRec(r->getRightChild());
		std::cout << r->getData() << std::endl;
		}
	else 
		std::cout << "."<< std::endl;	
}

// ***********************************************
// ******                                   ******
// ***********************************************	
bool cABB::searchValue(int k) {

	return (searchValueRec(root, k));
}

// ***********************************************
// ******                                   ******
// ***********************************************	
bool cABB::searchValueRec(cNode* r, int k) {

	return false;

}

// ***********************************************
// ******                                   ******
// ***********************************************	
bool cABB::insertNode(int k) {

	return insertNodeRec(&root, k);

}

// ***********************************************
// ******                                   ******
// ***********************************************	
bool cABB::insertNodeRec(cNode** r, int k) {

	return false;
}

// ***********************************************
// ******                                   ******
// ***********************************************	
bool cABB::removeNode(int k) {

	return removeNodeRec(&root, k);
}

// ***********************************************
// ******                                   ******
// ***********************************************	
bool cABB::removeNodeRec(cNode** r, int k) {

	return false;
}
