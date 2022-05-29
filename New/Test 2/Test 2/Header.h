#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <array>

using namespace std;



// Action manu
void action_page();
// add function
void add_tutor();
// this is display all the tutor
void display_tutor();
// search by ID
void search_ID(int ID);
//modify tutor
void modify_tutor();
//delete tutor
void delete_tutor();




//Linked List
class Node {
public:
    int value;
    Node* next;


};

// tutor count
