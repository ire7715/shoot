#include "shoot.h"

using namespace shoot;

void TreeNode::headerGenerate(const ofstream &htmlFile, const string &title) const{
	string lineBuffer;
	ifstream *header = new ifstream("shoot.hd", ifstream::in);

	htmlFile << "<head>\r\n"
	
	while(getline(*header, lineBuffer)){
		htmlFile << lineBuffer << "\r\n";
	}

	htmlFile << "<title>" << *title << "</title>\r\n";
	htmlFile << "</head>\r\n";

	header->close();
	delete header;
}

void TreeNode::generate(const string &title) const{
	ofstream *htmlFile = new ofstream(title + ".html", ofstream::out);

	*htmlFile << "<!DOCTYPE html>\r\n<html>\r\n";
	this->headerGenerate(htmlFile, title);
	*htmlFile << "<body>\r\n";

	this->printNode();

	*htmlFile << "</body>\r\n</html>"

	htmlFile->close();
	delete htmlFile;
}

void TreeNode::printNode(const ofstream &htmlFile){
	htmlFile << "<div><center><a>" << this->getData() << "</a></center>";
	TreeNode *current = (this->hasChild())?(this->child()):(null);
	while(current != null){
		current->printNode();
		current = (current->hasSibling())?(current->sibling()):(null);
	}
	htmlFile << "</div>";
}