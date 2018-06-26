#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <QDebug>

using namespace std;

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

struct ListNode {
 int val;
 ListNode *next;
 ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

    if (!l1) { return l2; }
    if (!l2) { return l1; }

    ListNode *head = NULL;
    if (l1->val > l2->val) {
        head = l2;
        l2 = l2->next;
    } else {
        head = l1;
        l1 = l1->next;
    }
    ListNode *current = head;
    while(l1 && l2) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (!l1) { current->next = l2;}
    if (!l2) { current->next = l1;}
    return head;
}

//int findSmall(vector<ListNode*>& lists) {

//    int index = -1;
//    int min = INT_MAX;
//    for (int i = 0; i < lists.size(); ++i) {
//        ListNode *current = lists[i];
//        if (!current) {
//            continue;
//        }
//        if (current->val < min) {
//            index = i;
//            min = current->val;
//        }
//    }
//    return index;
//}

//ListNode* mergeKLists(vector<ListNode*>& lists) {
//    vector<ListNode*> backup = lists;

//    ListNode temp = ListNode(-1);
//    ListNode *current = &temp;

//    int index = findSmall(backup);
//    while (index != -1) {
//        ListNode *node =  backup[index];
//        current->next = node;
//        current = current->next;
//        backup[index] = node->next;
//        index = findSmall(backup);
//    }

//    return temp.next;
//}

//ListNode* mergeKLists(vector<ListNode*>& lists)
//{

//    int size = lists.size();
//    if (size == 0) { return NULL;}
//    if (size == 1) { return lists[0]; }
//    if (size == 2) {
//        return mergeTwoLists(list[0], list[1]);
//    }

//    int mid = size / 2;
//    vector<ListNode*> sub_1;
//    vector<ListNode*> sub_2;
//    for (int i = 0; i < mid; ++i) {
//        sub_1.push_back(lists[i]);
//    }
//    for (int i = mid; i < size; ++i) {
//        sub_2.push_back(lists[i]);
//    }

//    ListNode* sub_1Node = mergeKLists(sub_1);
//    ListNode* sub_2Node = mergeKLists(sub_2);
//    mergeTwoLists(sub_1Node, sub_2Node);
//}


class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        queue<int> temp;
        temp.push(x);
        while (!mQueue.empty()) {
            temp.push(mQueue.front());
            mQueue.pop();
        }
        while (!temp.empty()) {
           mQueue.push(temp.front());
           temp.pop();
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int value = mQueue.front();
        mQueue.pop();
        return value;
    }

    /** Get the top element. */
    int top() {
        return mQueue.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return mQueue.empty();
    }

private:
    queue<int> mQueue;
};


class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        mStack.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (mReverseStack.empty()) {
            while (!mStack.empty()) {
               mReverseStack.push(mStack.top());
               mStack.pop();
            }
        }

        int value = mReverseStack.top();
        mReverseStack.pop();
        return value;
    }

    /** Get the front element. */
    int peek() {
        if (mReverseStack.empty()) {
            while (!mStack.empty()) {
               mReverseStack.push(mStack.top());
               mStack.pop();
            }
        }
        return mReverseStack.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return mStack.empty() && mReverseStack.empty();
    }

private:

    stack<int> mStack;
    stack<int> mReverseStack;
};


class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        mMin = INT_MAX;
    }

    void push(int x) {
        if (x < mMin) { mMin = x;}
        mStack.push(x);
        mMinStack.push(mMin);
    }

    void pop() {
        mStack.pop();
        mMinStack.pop();
        if (mMinStack.empty()) {
            mMin = INT_MAX;
        }
    }

    int top() {
        return mStack.top();
    }

    int getMin() {
        return mMinStack.top();
    }

private:
    int mMin;
    stack<int> mStack;
    stack<int> mMinStack;
};


bool check_is_valid_order(queue<int> &order)
{
    stack<int> stash;

}

void MainWindow::on_pushButton_clicked()
{
    MinStack stack;
    stack.push(INT_MAX - 1);
    stack.push(INT_MAX - 1);
    stack.push(INT_MAX);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.push(INT_MAX);
    stack.top();
}

































