class NQueen{
		int n;
		int board[];
		NListptr nhead;
		STreeptr shead;
	public:
		NQueen(int);
		STreeptr solve();
};

NQueen::NQueen(int n){
	this->n = n;
	NListptr temp, head;
	SListptr stemp, shead;
	int flag = 0; //to check if head is created
	for(int i=0; i<n; i++){
		Nlistptr node = NBOX;
		node->colnum = i;
		node->next = NULL;
		SListptr snode = SBOX;
		s->value = i;
		snode->parent = NULL;
		snode->prev = NULL;
		snode->next = NULL;
		snode->child = NULL;
		if(!flag){
			head = node;
			shead = node;
			flag = 1;
		}else{
			temp->next = node;
			node->prev = temp;
			stemp->next = snode;
			snode->prev = stemp;
		}
		temp = node;
	}
	
	for(int i=0; i<n*n; i++){
		board[i]=0;
	}
}

void NQueen::solve(){
	SListptr snode = this->shead;
	while(snode->next!=NULL){
		
	}
}

