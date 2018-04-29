typedef struct NodeList{
	int colnum;
	struct NodeList* prev;
	struct NodeList* next;
}NList;
typedef NList* NListptr;
#defien NBOX (NListptr)malloc(sizeof(NList))
