// 0416_Project.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*
#include <iostream>
using namespace std;

class  Node{
public:
	int data;
	Node* link;
};

Node* Head = NULL;

void insert_node_A(Node* pre, Node* new_node) { //A,B,C
	if (Head == NULL) { //공백리스트인 경우
		Head = new_node;

	}
	else if (pre == NULL) {
		new_node->link = Head;
		Head = new_node;
	}
	else {
		new_node->link = pre->link;
		pre->link = new_node;
	}
}

void insert_node_B(Node* new_node) { //A,B,C
	if (Head == NULL) { //공백리스트인 경우
		Head = new_node;

	}
	else {
		Node* list = Head;

		while (list->link != NULL)
			list = list->link;

		list->link = new_node;
	}
}

void insert_node_C(Node* new_node) { //A,B,C
	new_node->link = Head;
	Head = new_node;


}


void print_list() {
	
	for (Node* ptr = Head; ptr != NULL; ptr = ptr->link)
		if (ptr->link == NULL) cout << ptr->data << endl;
		else cout << ptr->data << "-->";
	

}

void reverse_list() {
    Node* p, * q, * r;
	p = Head; //p는 현재 가리키는 노드, q는 이전 노드
	q = r = NULL;
	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	Head = q;
}
void main()
{
	int num;
	cout << "입력 개수는? ";
	cin >> num;

	for (int i = 0; i < num; i++) {

		Node* new_node = new Node;
		int data;

		cin >> data;
		new_node->data = data;
		new_node->link = NULL;

		insert_node_B(new_node);
	}

	cout << "구성된 연결리스트: ";
	print_list();

	cout << "역순 연결리스트: ";
	reverse_list();
	print_list();

}

*/