#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

struct RandomListNode {
 int label;
 RandomListNode *next, *random;
 RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

ListNode *reverseList(ListNode *head)
{
    ListNode *newHead = NULL;
    while (head) {
        ListNode *next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }

    return newHead;


}


ListNode* reverseBetween(ListNode* head, int m, int n) {

    if (m == n) { return head;}

    ListNode *origin = head;

    ListNode *mPreNode = NULL;
    ListNode *mNode;
    int index = 1;
    ListNode *reverseHead;
    ListNode *next;

    while (head && index < m) {
        if (index == m - 1) {
            mPreNode = head;
        }
        head = head->next;
        ++index;
    }

    mNode = head;
    while (head && index <= n) {
        next = head->next;

        head->next = reverseHead;
        reverseHead = head;

        head = next;
        ++index;
    }

    mNode->next = head;
    if (mPreNode) {
        mPreNode->next = reverseHead;
    } else {
        origin = reverseHead;
    }

    return origin;
}

//ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

//    set<ListNode *> headANodes;
//    while (headA) {
//        headANodes.insert(headA);
//        headA = headA->next;
//    }

//    while (headB) {
//       if (headANodes.find(headB) != headANodes.end()) {
//           return headB;
//       }

//       headB = headB->next;
//    }

//    return NULL;
//}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    ListNode *temp;
    temp = headA;
    int lengthA = 0;
    while (temp) {
        ++lengthA;
        temp = temp->next;
    }

    temp = headB;
    int lengthB = 0;
    while (temp) {
        ++lengthB;
        temp = temp->next;
    }

    if (lengthA > lengthB) {
        int delta = lengthA - lengthB;
        while(delta) {
            headA = headA->next;
        }
    } else {
        int delta = lengthB - lengthA;
        while(delta) {
            headB = headB->next;
        }
    }

    while (headA) {
        if (headA == headB) {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }

    return NULL;
}


bool hasCycle(ListNode *head) {
    ListNode *doubleHead = head;
    while (head && doubleHead) {
        head = head->next;
        doubleHead = doubleHead->next? doubleHead->next->next : NULL;
        if (head == doubleHead) {
            return true;
        }
    }

    return false;
}

ListNode *detectCycle(ListNode *head) {
    if (!head) { return NULL;}

    ListNode *fastNode = head;
    ListNode *slowNode = head;
    ListNode *meetNode = NULL;
    while(fastNode && slowNode) {
        fastNode = fastNode->next? fastNode->next->next: fastNode->next;
        slowNode = slowNode->next;
        if (fastNode == slowNode){
            meetNode = fastNode;
            break;
        }
    }

    if (!meetNode) { return NULL;}

    while (true) {
        if (meetNode == head) { return meetNode;}
        meetNode = meetNode->next;
        head = head->next;
    }

    return NULL;
}
ListNode* partition(ListNode* head, int x) {

    ListNode lessHead =  ListNode(0);
    ListNode greatHead =  ListNode(0);
    ListNode *lessCurrent = &lessHead;
    ListNode *greatCurrent = &greatHead;

    while (head) {
        if (head->val < x) {
            lessCurrent->next = head;
            lessCurrent = head;
        } else {
            greatCurrent->next = head;
            greatCurrent = head;
        }
        head = head->next;
    }

    lessCurrent->next = greatHead.next;
    greatCurrent->next = NULL;

    return lessHead.next;
}

//ListNode* partition(ListNode* head, int x) {

//    if (!head) { return NULL;}

//    ListNode *lessHead = NULL;
//    ListNode *greaterEqualHead = NULL;
//    ListNode *lessCurrent = NULL;
//    ListNode *greateCurrent = NULL;

//    if (head->val < x) {
//        lessHead = head;
//        lessCurrent = head;
//    } else {
//        greaterEqualHead = head;
//        greateCurrent = head;
//    }

//    head = head->next;
//    while (head) {
//        if (head->val < x) {
//            if (!lessHead) {
//                lessHead = head;
//                lessCurrent = lessHead;
//            } else {
//                lessCurrent->next = head;
//                lessCurrent = lessCurrent->next;
//            }
//        } else {
//            if (!greaterEqualHead) {
//                greaterEqualHead = head;
//                greateCurrent = head;
//            } else {
//                greateCurrent->next = head;
//                greateCurrent = greateCurrent->next;
//            }
//        }
//        head = head->next;
//    }

//    if (lessHead) {
//        lessCurrent->next = greaterEqualHead;
//        if (greateCurrent) {
//            greateCurrent->next = NULL;
//        }
//        return lessHead;
//    } else {
//        greateCurrent->next = NULL;
//        return greaterEqualHead;
//    }
//}

RandomListNode *copyRandomList(RandomListNode *head) {

    map<RandomListNode*, int> sourceMap;
    RandomListNode *temp = head;

    int index = 0;
    while(temp) {
        sourceMap[temp] = index;
        ++index;
        temp = temp->next;
    }

    vector<int> recoreder;
    temp = head;
    while(temp) {
        RandomListNode *random = temp->random;
        if (!random) {
            recoreder.push_back(-1);
        } else {
            recoreder.push_back(sourceMap[random]);
        }
        temp = temp->next;
    }

    temp = head;
    RandomListNode *newHead = NULL;
    RandomListNode *current;
    index = 0;
    map<int, RandomListNode*> targetMap;
    while(temp) {
        RandomListNode *node = new RandomListNode(temp->label);
        targetMap[index] = node;
        ++index;
        if (!newHead) {
            newHead = node;
            current = newHead;
            temp = temp->next;
            continue;
        }
        current->next = node;
        current = node;
        temp = temp->next;
    }

    temp = newHead;
    for(int i = 0; i < recoreder.size(); ++i) {
        int record = recoreder[i];
        if (record == -1){
            temp->random = NULL;
        } else {
            temp->random = targetMap[record];
        }
        temp = temp->next;
    }

    return newHead;
}

void MainWindow::on_pushButton_clicked()
{
     vector<int> nums = {4,3,2,5,2};
     RandomListNode *head = new RandomListNode(1);
     RandomListNode *current = head;
     for (int i = 0; i < nums.size(); ++i) {
         current->next = new RandomListNode(nums[i]);
         current->random = current->next;
         current = current->next;
     }

     copyRandomList(head);
}
