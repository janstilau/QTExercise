#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>

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

ListNode* mergeKLists(vector<ListNode*>& lists) {

}
