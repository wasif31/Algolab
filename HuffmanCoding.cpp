#include<bits/stdc++.h>
using namespace std;

struct compare{
    bool operator()(MinHeapNode* l, MinHeapNode* r)
    {
        return (l->freq > r->freq);
    }
};

void printCodes(struct MinHeapNode* root , string str)
{

    if(!root)
        return;
    if(root->data != '$')
        cout<<root->data << "; " <<str<< "\n";

    printCodes(root->left , str+"0");
    printCodes(root->right , str+"1");

}

void Huffmancodes(char data[] ,int freq[], int size)
{

    struct MinHeapNode *left, *right, *top;

}

int main()
{

    return 0;
}
