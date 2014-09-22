/**
*	Project	: Shoot
*	Author	: Ire @ github.com/ire7715
*	Date	: 22, Sep, 2014
**/

#include "shoot.h"

shoot::TreeNode::TreeNode(){ }

shoot::TreeNode::~TreeNode(){ }

void shoot::TreeNode::headerGenerate(ofstream &htmlFile, const string &title){
	string lineBuffer;
	ifstream header("shoot.hd", fstream::in);

	htmlFile << "<head>" << endl;
	
	while(getline(header, lineBuffer)){
		htmlFile << lineBuffer << endl;
	}

	htmlFile << "<title>" << title << "</title>" << endl;
	htmlFile << "</head>" << endl;

	header.close();
}

void shoot::TreeNode::generate(const string &title){

	
	ofstream htmlFile(string(title + ".html").c_str(), fstream::out);

	htmlFile << "<!DOCTYPE html>" << endl << "<html>" << endl;
	this->headerGenerate(htmlFile, title);
	htmlFile << "<body>" << endl;

	this->printNode(htmlFile);

	htmlFile << "</body>" << endl << "</html>";

	htmlFile.close();
}

void shoot::TreeNode::printNode(ofstream &htmlFile){
	TreeNode *current;

	htmlFile << "<div><center><a>" << this->getData() << "</a></center>";

	if(this->hasChild()){
		current = this->child();
		current->printNode(htmlFile);
		while(current->hasSibling()){
			current = current->sibling();
			current->printNode(htmlFile);
		}
	}

	htmlFile << "</div>";
}