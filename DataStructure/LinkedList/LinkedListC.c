#include "LinkedListC.h"
#include <stdio.h>

// ��� �߰��� �ڵ����� Apppend
Node* CreateNode(LinkedList* list, const char* name, int hp)
{
    Node* NewNode = (Node*)malloc(sizeof(Node));
    strcpy_s(NewNode->name, NAME_MAX_LEN, name);
    NewNode->Hp = hp; 
    NewNode->pNext = NULL;

    if (list->pTail == NULL)    // ����Ʈ�� ����� ��� head = tail
    {
        list->pHead = NewNode;
        list->pTail = NewNode;
    }
    else
    {
        list->pTail->pNext = NewNode;
        list->pTail = NewNode;
    }
    return NewNode;
}

void PrintNode(const LinkedList* list)
{
    Node* element = list->pHead;

    if (element == NULL)
    {
        printf("The list is empty");
    }

    while (element != NULL)
    {
        printf("%s : %d\n", element->name, element->Hp);
        element = element->pNext;
    }
}


//  ��� �Ҹ� 
void DestroyList(LinkedList* list)
{
    Node* element = list->pHead;

    while (element != NULL)
    {
        Node* mNext = element->pNext;
        free(element);

        element = mNext;
    }
    list->pHead = NULL;
    list->pTail = NULL;
}


//  ��� ���� 
void  Insert(LinkedList* list, Node* target, char* name, int hp)
{
    Node* element = list->pHead;
    Node* previous = NULL;

    
    while (element != NULL)
    {
        if (element == target)
        {
            break;
        }
        previous = element;
        element = element->pNext;
    }

    Node* NewNode = (Node*)malloc(sizeof(Node));
    strcpy_s(NewNode->name, NAME_MAX_LEN, name);
    NewNode->Hp = hp;

    if (previous == NULL)
    {
        // Head �տ� �� ��� ����
        previous = NewNode;
        list->pHead = previous;

        NewNode->pNext = element;
    }
    else
    {
        // �߰� ����
        previous->pNext = NewNode;
        NewNode->pNext = element;
    }

}


//  ��� ���� 
void RemoveNode(LinkedList* list, Node* target)
{
    Node* elemet = list->pHead;
    Node* previous = NULL;

    while (elemet != NULL)
    {
        if (elemet == target)
        {
            break;
        }
        previous = elemet;
        elemet = elemet->pNext;
    }
    // �� ã��
    if (elemet == NULL)
    {
        return;
    }
    // head
    else if (elemet == list->pHead)
    {
        list->pHead = elemet->pNext;
        // ���࿡ Ÿ���� head���� tail �̸�
        if (elemet == list->pTail)
        {
            list->pHead == NULL;
            list->pTail == NULL;
        }
    }
    // tail
    else if (elemet == list->pTail)
    {
        list->pTail = previous;
        previous->pNext = NULL;
    }
    // �߰�
    else
    {
        previous->pNext = elemet->pNext;
    }
    free(elemet);
}

//  ��� Ž�� 
Node* FindNode(LinkedList* list, const char* name)
{
    Node* element = list->pHead;
    while (element != NULL)
    {
        if (strcmp(element->name, name) == 0)
        {
            return element;
        }
        element = element->pNext;
    }
    return NULL;

}

//  ��� �� ���� 
int GetNodeCount(LinkedList* list)
{
    int count = 0;
    Node* element = list->pHead;
    while (element != NULL)
    {
        element = element->pNext;
        count++;
    }
    return count;
}
