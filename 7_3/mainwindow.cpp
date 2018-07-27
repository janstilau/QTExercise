#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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

void flatten(TreeNode* root) {

    if (!root) { return; }
    flatten(root->left);
    flatten(root->right);
    TreeNode *left = root->left;
    TreeNode *right = root->right;
    root->left = NULL;
    root->right = left;
    while (root->right) {
        root = root->right;
    }
    root->right = right;
}

int longestPalindrome(string s) {
    map<char, int> stash;
    for (int i = 0; i < s.size(); ++i) {
        const char &letter = s[i];
        auto it = stash.find(letter);
        if ( it == stash.end()) {
            stash[letter] = 1;
        } else {
            stash[letter]++;
        }
    }

    int sum = 0;
    bool added = false;
    for(auto pair : stash) {
        if(pair.second & 0x01) {
            if (!added) {
                sum++;
                added = true;
            }
        } else {
            sum += pair.second;
        }
    }
    return sum;
}


bool locationValid(pair<int, int> &location, int width, int height, vector<vector<char>>& state, vector<vector<char>>& grid) {
    if (0 <= location.first && location.first < height && 0 <= location.second && location.second < width) {
        if (state[location.first][location.second] == 0 && grid[location.first][location.second] == '1') {
           return true;
        }
    }
    return false;
}

int numIslands(vector<vector<char>>& grid) {

    int height = grid.size();
    if (!height) { return 0; }
    int width = grid[0].size();
    if (!width) { return 0; }

    vector<vector<char>> state;
    for (int i = 0; i < height; ++i) {
       vector<char> line;
       for (int j = 0; j < width; ++j) {
           line.push_back(0);
       }
       state.push_back(line);
    }

    int count = 0;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (grid[i][j] == '1' && state[i][j] == 0) {
                queue<pair<int,int>> stash;
                stash.push(make_pair(i, j));
                while (!stash.empty()) {
                    const pair<int, int> location = stash.front();
                    stash.pop();
                    state[location.first][location.second] = 1;
                    pair<int, int> top = make_pair(location.first - 1, location.second);
                    if (locationValid(top, width, height, state, grid)) {stash.push(top);}
                    pair<int, int> bottom = make_pair(location.first + 1, location.second);
                    if (locationValid(bottom, width, height, state, grid)) {stash.push(bottom);}
                    pair<int, int> left = make_pair(location.first, location.second - 1);
                    if (locationValid(left, width, height, state, grid)) {stash.push(left);}
                    pair<int, int> right = make_pair(location.first, location.second + 1);
                    if (locationValid(right, width, height, state, grid)) {stash.push(right);}
                }
                count++;
            }
        }
    }

    return count;
}

void MainWindow::on_pushButton_clicked()
{
    vector<char> line_1 = {'1','1','0','0','0'};
    vector<char> line_2 = {'1','1','0','0','0'};
    vector<char> line_3 = {'0','0','1','0','0'};
    vector<char> line_4 = {'0','0','0','1','1'};
    vector<vector<char>> grid;
    grid.push_back(line_1);
    grid.push_back(line_2);
    grid.push_back(line_3);
    grid.push_back(line_4);
    numIslands(grid);
}
