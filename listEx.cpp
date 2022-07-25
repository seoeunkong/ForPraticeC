#include <iostream>
using namespace std;


class Node {
public:
	int data;
	Node* link;

};

Node* Head;

void insert_node_A(Node *pre, Node *new_node) { //A,B,C
	if (Head == NULL) { //���鸮��Ʈ�� ���
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
	if (Head == NULL) { //���鸮��Ʈ�� ���
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

void delete_node(int x) { //x���� ���� ��带 ���Ḯ��Ʈ���� ����
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
	cout << "��ü �Է� �������� ������?: ";
	cin >> data_number;

	for (int i = 0; i < data_number; i++) { //8���� ������ �Է�
		
		//���ο� �����͸� ���ʷ� �Է��� ����
		int i_data;
		cout << "���ο� ���� �Է��Ͻÿ�(#"<<i+1<<"): ";
		cin >> i_data;

		//���ο� ��带 �����Ͽ� ������ ����
		Node* new_node = new Node;
		new_node->data = i_data;
		new_node->link = NULL;

		//��ü ���Ḯ��Ʈ�� �߰�/����
		//insert_node_A(NULL,new_node);
		//insert_node_B(new_node);
		insert_node_C(new_node);
	}

	cout << "������ ���Ḯ��Ʈ: ";
	print_list();


	//���� ���� ����
	while (true) {

		string p;
		cout << "��带 �����ϰ� ������ d, ���ٸ� q�� ��������: ";
		cin >> p;

		if (p == "q") {
			cout << "�����ϰڽ��ϴ�";
			cout << endl;
			break;
		}
		else if(p=="d"){

			int del_data;
			cout << "������ ����� ��: ";

			cin >> del_data;
			//������
			delete_node(del_data);
			cout << "##������ ���Ḯ��Ʈ�� :";
			print_list();
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �ѹ� Ȯ�����ּ���." << endl;
		}
		cout << endl;
	}

	
}