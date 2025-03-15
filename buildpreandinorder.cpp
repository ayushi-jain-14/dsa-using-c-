#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
int search(int inorder[], int str, int end, int curr)
{
    for (int i = str; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

node *buildtree(int preorder[], int inorder[], int str, int end)
{

    static int idx = 0;
    if (str > end)
    {
        return nullptr;
    }
    int curr = preorder[idx];
    idx++;
    node *Node = new node(curr);
    if (str == end)
    {
        return Node;
    }
    int pos = search(inorder, str, end, curr);
    Node->left = buildtree(preorder, inorder, str, pos - 1);
    Node->right = buildtree(preorder, inorder, pos + 1, end);
    return Node;
}

void inorderprint(struct node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = buildtree(preorder, inorder, 0, 4);
    inorderprint(root);
    return 0;
}