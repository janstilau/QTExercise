#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <list>
#include <QDebug>

using namespace  std;


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

void compute(stack<int> &numbers, stack<char> &operations)
{
    if (numbers.size() < 2) { return; }
    int latter = numbers.top();
    numbers.pop();
    int former = numbers.top();
    numbers.pop();

    char operation = operations.top();
    operations.pop();
    if (operation == '+') {
        numbers.push(former + latter);
    } else {
        numbers.push(former - latter);
    }
}

bool isNumber(char &letter) {
    if ('0' <= letter && letter <= '9')  {
        return true;
    } else {
        return false;
    }
}

int calculate(string s) {

    const int BeginState = -1;
    const int NumberState = 0;
    const int OperationState = 1;

    stack<int> number_stack;
    stack<char> operation_stack;
    int currentState = BeginState;
    bool canCompute = false;
    int number = 0;

    for(int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') { continue; }

        switch (currentState) {
        case BeginState:
            if (isNumber(s[i])) {
                currentState = NumberState;
            } else {
                currentState = OperationState;
            }
            --i;
            break;
        case NumberState:
            if (isNumber(s[i])) {
                int addend = s[i] - '0';
                number = number * 10 + addend;
            } else {
                number_stack.push(number);
                if (canCompute) {
                    compute(number_stack, operation_stack);
                }
                currentState = OperationState;
                --i;
                number = 0;
            }

            break;
        case OperationState:
            if (isNumber(s[i])) {
                currentState = NumberState;
                --i;
            } else if(s[i] == '(') {
                canCompute = false;
            } else if (s[i] == '+' || s[i] == '-') {
                operation_stack.push(s[i]);
                canCompute = true;
            } else {
                compute(number_stack, operation_stack);
            }
            break;
        default:
            break;
        }
    }

    if (!number_stack.size() && number == 0) {
        return 0;
    }

    if (number) {
        number_stack.push(number);
        compute(number_stack, operation_stack);
    }

    return number_stack.top();
}

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
}

struct Node {
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        header = new Node(-1);
        middle = NULL;
        size = 0;
    }

    void addNum(int num) {
        Node *current = header;
        while (current) {
            if (current->next == NULL) {
                current->next = new Node(num);
                break;
            } else {
                if (current->next->value < num) {
                    current = current->next;
                } else {
                    Node *temp = current->next;
                    current->next = new Node(num);
                    current->next->next = temp;
                    break;
                }
            }
        }

        ++size;
    }

    double findMedian() {
        if (!size) { return 0.0; }
        int middle = size / 2;
        Node *current = header->next;
        if (size & 0x01) {
            while(middle) {
                current = current->next;
                --middle;
            }
            return current->value * 1.0;
        } else {
            --middle;
            while(middle) {
                current = current->next;
                --middle;
            }
            double value = (current->value + current->next->value) / 2.0;
            return value;
        }
    }

private:
    int size;
    Node *header;
    Node *middle;
};

void MainWindow::on_pushButton_clicked()
{
    MedianFinder s;
    s.addNum(1);
    s.addNum(2);
    s.findMedian();
    s.addNum(3);
    s.findMedian();
}
