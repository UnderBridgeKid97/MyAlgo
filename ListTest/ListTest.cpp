﻿// ListTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

struct  Node
{
    int data; // 저장할 데이터
    Node* next; // 다음에 올 노드
};
    class LinkedLsit
    {
    private:
        Node* head;                 //맨 앞에 오는 노드

    public:
        // 생성자
        LinkedLsit() : head(NULL) {};

        //소멸자
        ~LinkedLsit()
        {
            // 생성한 node의 메모리 해제
            while (!empty())
            {
                pop_front(); // 데이터가 있으면 헤드를 해제 -> 반복 -> 메모리 전부 할당 해제
            }
        }

        // 매개변수롤 데이터(value)를 입력받아 리스트 맨앞에 삽입하기
        void push_front(int value)
        {
            // 데이터 벨류를 가진 노드를 생성
            Node* new_node = new Node{ value, NULL };

            if (head != NULL)
            {
                new_node->next = head;
            }
            head = new_node;
        }

        // 리스트 맨 앞에 있는 데이터 삭제하기

        void pop_front()
        {
            if (head == NULL)
                return;

            Node* first = head;
            head = head->next;
            delete first; // 첫 위치의 메모리 해제
        }

        // 리스트의 모든 노드 데이터 출력
        void print_all()
        {
            Node* curr = head;

            // curr가 null이 될때까지 반복 -> null이 되면 종료
            while (curr != NULL)
            {
                // 현재 curr 노드의 데이터를 출력
                cout << curr->data << ", ";

                // curr 노드가 다음 노드로 이동
                curr = curr->next;
            }
            cout << endl;
        }

        // 데이터 유무
        bool empty() // 비었을떄 트루 아니면 폴스
        {
            return head == NULL;
        }
    };

    int main()
    {
        LinkedLsit ll;
        ll.push_front(10);
        ll.push_front(20);
        ll.push_front(30);
        ll.print_all();

        ll.pop_front();
        ll.print_all();

        ll.push_front(40);
        ll.print_all();
    }
