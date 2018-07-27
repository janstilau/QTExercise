#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <QDebug>
#include <math.h>

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


int wiggleMaxLength(vector<int>& nums) {

    if (nums.size() <= 1) { return nums.size(); }

    int count = 1;
    int preNum, currentNum;
    preNum = nums[0];
    int state = 0;
    for (int i = 1; i < nums.size(); ++i) {
        currentNum = nums[i];
        if (currentNum == preNum) { continue; }
        if (currentNum > preNum) {
            if (state == 0 || state == -1) {
                state = 1;
                ++count;
            }
        } else {
            if (state == 0 || state == 1) {
                state = -1;
                ++count;
            }
        }
        preNum = currentNum;
    }

    return count;
}

string removeKdigits(string num, int k) {
    if (num.size() == 1) {
        return k == 1? "0": num;
    }
    char pre, current;
    for (int i = 1; i < num.size() && k; ++i) {
        pre = num[i - 1];
        current = num[i];
        if (pre == current) { continue; }
        num[i] = min(pre, current);
        num[i - 1] = 'X';
        --k;
    }

    string result;
    int index = 0;
    while ((num[index] == '0' || num[index] == 'X') && index < num.size()) {
        ++index;
    }

    while (index < num.size()) {
        if (num[index] != 'X') {
            result.push_back(num[index]);
        }
        ++index;

    }
    if (!result.size()) { result = "0";}
    return result;
}

int mypow(int exponent) {
    int result = 1;
    while (exponent--) {
        result *= 2;
    }
    return result;
}

vector<vector<int>> subsets(vector<int>& nums) {

    int size = nums.size();
    int max = mypow(size) - 1;
    vector<vector<int>> result;
    for (int i = 0; i <= max; ++i) {
        vector<int> sequence;
        for(int j = 0; j < size; ++j) {
            bool exist = (i >> j) & 0x01;
            if (exist) {
                sequence.push_back(nums[j]);
            }
        }
        result.push_back(sequence);
    }
    return result;
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    set<vector<int>> temp;

    int size = nums.size();
    int max = 1 << size;
    vector<vector<int>> result;
    for (int i = 0; i <= max; ++i) {
        vector<int> sequence;
        for(int j = 0; j < size; ++j) {
            bool exist = (i >> j) & 0x01;
            if (exist) {
                sequence.push_back(nums[j]);
            }
        }
        if (temp.find(sequence) == temp.end()) {
            temp.insert(sequence);
            result.push_back(sequence);
        }
    }
    return result;
}

vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int max = 1 << size;
    vector<vector<int>> result;
    set<vector<int>> temp;
    for (int i = 0; i <= max; ++i) {
        vector<int> sequence;
        int sum = 0;
        for(int j = 0; j < size; ++j) {
            bool exist = (i >> j) & 0x01;
            if (exist) {
                sequence.push_back(nums[j]);
                sum += nums[j];
                if (sum > target) { break; }
            }
        }
        if (sum == target) {
            if (temp.find(sequence) == temp.end() ) {
                temp.insert(sequence);
                result.push_back(sequence);
            }
        }
    }
    return result;
}


void MainWindow::on_pushButton_clicked()
{
    vector<int> nums = {14,6,25,9,30,20,33,34,28,30,16,12,31,9,9,12,34,16,25,32,8,7,30,12,33,20,21,29,24,17,27,34,11,17,30,6,32,21,27,17,16,8,24,12,12,28,11,33,10,32,22,13,34,18,12                     };
    combinationSum2(nums, 27);
}

































