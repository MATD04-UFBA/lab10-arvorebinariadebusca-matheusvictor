#pragma once

#include <vector>

class cABB {

private:
	cNode *root;

	bool 	searchValueRec(cNode* r, int k);
	bool 	insertNodeRec(cNode** r, int k);
	bool 	removeNodeRec(cNode** r, int k);

	void 	preOrderTravRec(cNode* r);
	void 	inOrderTravRec(cNode* r);
	void 	posOrderTravRec(cNode* r);	

public:

	cABB();
	cABB(std::vector<int> v);

	bool 	searchValue(int k);
	bool 	insertNode(int k);
	bool 	removeNode(int k);

	void 	preOrderTraversal();
	void 	inOrderTraversal();
	void 	posOrderTraversal();	
};
