typedef struct queenNode{
	int row;
	int col;
	struct queenNode* child;
	struct queenNode* next;
}QNode;

typedef QNode* QNodeptr;
#define QBOX (QNodeptr)malloc(sizeof(QNode))
