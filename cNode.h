#pragma once

class cNode	{ 	

private:
	int data;
    cNode* left;
    cNode* right;

public:

	cNode();
	cNode(int d);

	void 	setLeftChild(cNode* node);
	cNode* 	getLeftChild();
	cNode**	getRefLeftChild();

	void 	setRightChild(cNode* node);
	cNode* 	getRightChild();
	cNode**	getRefRightChild();

	void 	setData(int d);
	int  	getData();

};