#include <bits/stdc++.h>
#include <string>

class Node
{
public:
    Node *child[26];
    int count = 0; // number of words ending here
};

class Trie
{
public:
    Node *root;

    Trie()
    {
        root = new Node();
    }

    void add(string s, int si)
    {
        Node *current = root;
        for (int i = si; i < s.length(); i++)
        {
            int idx = s[i] - 'a';
            if (current->child[idx] == NULL)
            {
                current->child[idx] = new Node();
            }
            current = current->child[idx];
            current->count++;
        }
    }

    bool exists(string s, int si)
    {
        Node *current = root;
        for (int i = si; i < s.length(); i++)
        {
            int idx = s[i] - 'a';
            if (current->child[idx] == NULL || current->child[idx]->count < 1)
            {
                return false;
            }
            current = current->child[idx];
        }
        return true;
    }

    void remove(string s, int si)
    {

        if (!exists(s, si))
            return;
        // we are assuming that string already exists in the trie
        Node *current = root;
        for (int i = si; i < s.length(); i++)
        {
            int idx = s[i] - 'a';
            current = current->child[idx];
            current->count--;
        }
    }
};