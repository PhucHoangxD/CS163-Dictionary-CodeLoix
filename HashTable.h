#pragma once

#include "Word.h"
#include "Const.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct HashNode {
    Word data;
    HashNode* pNext = nullptr;

    HashNode (std::string &_data);
};

struct HashLinkedList {
    HashNode* pHead = nullptr;
    HashNode* pTail = nullptr;
};

struct HashTable {
    int P, N;
    HashLinkedList *List;
    std::vector <std::string> GetType;

    HashTable(int _P, int _N);
    ~HashTable();

    int GetHash(std::string &s);
    void InsertNewString(std::string &s);
    void InsertNewWord(Word &W);

    void displayChain();
    void DeleteWord(std::string &s);
    HashNode* FindWord(std::string &s);

    void FileInput(std::string &Filename);
    void ShowAllWord();
};

