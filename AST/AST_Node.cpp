/*
Project 2
Abstract Syntax Tree and Implementation
2/5/19
*/

enum astNodeType {
  boolTrue,
  boolFalse,
  logicalNOT,
  logicalAND,
  logicalOR,
  undefined 
}

class astNode {

public:  
  astNodetype type;
  astNode* right;
	astNode* left;

  astNode() {
    type = undefined
    left = NULL;
    right = NULL;
  }
  ~astNode() {
    delete left;
    delete right;
  }
};
