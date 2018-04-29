typedef struct SolutionTree{
	int value;
	struct SolutionTree* parent;
	struct SolutionTree* prev;
	struct SolutionTree* next;
	struct SolutionTree* child;
}STree;
typedef STree* STreeptr;
#define SBOX (STreeptr)malloc(sizeof(STree))
