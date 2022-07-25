#include <iostream>
using namespace std;


class Node {
public:
	int data;
	Node* link;

};

Node* Head;

void insert_node_A(Node *pre, Node *new_node) { //A,B,C
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

void delete_node(int x) { //x값을 갖는 노드를 연결리스트에서 삭제
	Node* list = Head;

	if (Head == NULL) return;
	else if (Head->data == x) {
		Head = Head->link;
		return;
	}
	else {
		while (list->link != NULL) {
		if (list->link->data == x) {
			list->link = list->link->link;
			return;
		}
		list = list->link;
	}
	}

}

void print_list() {
	for (Node* ptr = Head; ptr != NULL; ptr = ptr->link)
		if (ptr->link == NULL) cout << ptr->data << endl;
			else cout << ptr->data <<"-->";
}

void main() {
	Head = NULL;

	int data_number;
	cout << "전체 입력 데이터의 개수는?: ";
	cin >> data_number;

	for (int i = 0; i < data_number; i++) { //8개의 데이터 입력
		
		//새로운 데이터를 차례로 입력을 받음
		int i_data;
		cout << "새로운 값을 입력하시오(#"<<i+1<<"): ";
		cin >> i_data;

		//새로운 노드를 생성하여 내용을 수정
		Node* new_node = new Node;
		new_node->data = i_data;
		new_node->link = NULL;

		//전체 연결리스트에 추가/삽입
		//insert_node_A(NULL,new_node);
		//insert_node_B(new_node);
		insert_node_C(new_node);
	}

	cout << "구성된 연결리스트: ";
	print_list();


	//삭제 진행 여부
	while (true) {

		string p;
		cout << "노드를 삭제하고 싶으면 d, 없다면 q를 누르세요: ";
		cin >> p;

		if (p == "q") {
			cout << "종료하겠습니다";
			cout << endl;
			break;
		}
		else if(p=="d"){

			int del_data;
			cout << "삭제할 노드의 값: ";

			cin >> del_data;
			//노드삭제
			delete_node(del_data);
			cout << "##삭제후 연결리스트는 :";
			print_list();
		}
		else {
			cout << "잘못 입력하셨습니다. 다시 한번 확인해주세요." << endl;
		}
		cout << endl;
	}

	
}