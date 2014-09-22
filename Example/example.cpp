/**
*	Project	: Shoot
*	Author	: Ire @ github.com/ire7715
*	Date	: 22, Sep, 2014
**/

#include "shoot.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace shoot;

class pairingHeap : public TreeNode{
public:
	pairingHeap(int data){
		this->data = data;
		this->_sibling = this->_child = NULL;
	}

	~pairingHeap(){
		if(this->_sibling != NULL)
			delete this->_sibling;
		if(this->_child != NULL)
			delete this->_child;
	}

	pairingHeap *sibling(){
		return this->_sibling;
	}

	pairingHeap *child(){
		return this->_child;
	}

	bool hasSibling(){
		return (bool)(this->_sibling);
	}

	bool hasChild(){
		return (bool)(this->_child);
	}

	string getData(){
		char dataS[6];
		sprintf(dataS, "%d", this->data);
		return string(dataS);
	}

	/**
	*	Delete the min node, store the value in #2 argument as refernece. (Performing 2-pass melding schema.)
	*	Return the new root.
	**/
	static pairingHeap *remove(const pairingHeap *root, int &data){
		pairingHeap *waiting, *finished = NULL, *couple, *renewal;
		data = root->data;

		// 1st pass.
		waiting = root->_child;
		while(waiting != NULL){
			if(waiting->_sibling == NULL){
				waiting->_sibling = finished;
				finished = waiting;
				waiting = NULL;
			}else{
				couple = waiting;
				waiting = waiting->_sibling->_sibling;
				renewal = pairingHeap::meld(couple, couple->_sibling);
				renewal->_sibling = finished;
				finished = renewal;
			}
		}

		waiting = finished;
		// 2nd pass.
		while(waiting->_sibling != NULL){
			couple = waiting;
			waiting = waiting->_sibling->_sibling;
			renewal = pairingHeap::meld(couple, couple->_sibling);
			renewal->_sibling = waiting;
			waiting = renewal;
		}

		return waiting;
	}

	/**
	*	Insert a new node containing the given int data.
	*	Return the new root.
	**/
	static pairingHeap *insert(pairingHeap *oRoot, int alien){
		pairingHeap *alienNode = new pairingHeap(alien);
		return pairingHeap::meld(oRoot, alienNode);
	}

	/**
	*	Meld two heaps, return the new root.
	*
	**/
	static pairingHeap *meld(pairingHeap *earthian, pairingHeap *aliens){
		pairingHeap *root, *child;
		switch(pairingHeap::compare(earthian, aliens)){
			case 1:
				root = aliens;
				child = earthian;
				break;
			case -1:
			case 0:
				root = earthian;
				child = aliens;
				break;
		}
		child->_sibling = root->_child;
		root->_child = child;
		//root->sibling = NULL;
	}

	static int compare(pairingHeap *f, pairingHeap *s){
		if(f->data > s->data)
			return 1;
		else if (f->data < s->data)
			return -1;
		else 
			return 0;
	}

	int compare(pairingHeap *s){
		if(this->data > s->data)
			return 1;
		else if (this->data < s->data)
			return -1;
		else 
			return 0;
	}
private:
	int data;
	pairingHeap *_sibling;
	pairingHeap *_child;
};

int main(int argc, char *argv[]){
	int data;
	pairingHeap *root = new pairingHeap(3), *toor = new pairingHeap(7);
	root = pairingHeap::insert(root, 5);
	toor = pairingHeap::insert(toor, 4);

	root = pairingHeap::meld(root, toor);

	root = pairingHeap::remove(root, data);

	root->generate(string("example"));
	delete root;
	return 0;
}