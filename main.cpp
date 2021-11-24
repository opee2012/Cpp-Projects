#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// A linked list node
class Node {
public:
    Node *prev;
    double ratingData;
    string titleData;
    Node *next;
};

ifstream inputFile;
string inputFileName;

// Function Prototypes
string FileCheck();
void nodeInsetail (Node **head, Node **tail, double rating, string title);
void printList(Node *temp);

int main() {
    double rating;
    string title;

    FileCheck();

    Node *left = NULL, *right = NULL;
    
    while (!inputFile.eof()) {
        inputFile >> rating;
        getline(inputFile, title);
        if (title == " ")
            continue;
        nodeInsetail(&left, &right, rating, title);
    }

    printList(right);

    return 0;
}

string FileCheck() {
    do {
        cout << "Please enter a valid file name: ";
        cin >> inputFileName;

        inputFile.open(inputFileName);
        if (!inputFile.is_open())
            cout << "Could not open file " << inputFileName << endl;
    } while (!inputFile.is_open());
    
    return (inputFileName);
}

void nodeInsetail (Node **head, Node **tail, double rating, string title) {
    Node *curr = new Node();
    curr->ratingData = rating;
    curr->titleData = title;
    curr->next = NULL;

    // If first node to be insetailed in doubly linked list
    if ((*head) == NULL) {
        (*head) = curr;
        (*tail) = curr;
        (*head)->prev = NULL;
        return;
    }

    // If node to be insetailed has value less than first node
    if ((curr->ratingData) < ((*head)->ratingData)) {
        curr->prev = NULL;
        (*head)->prev = curr;
        curr->next = (*head);
        (*head) = curr;
        return;
    }

    // If node to be insetailed has value more than last node
    if ((curr->ratingData) > ((*tail)->ratingData)) {
        curr->prev = (*tail);
        (*tail)->next = curr;
        (*tail) = curr;
        return;
    }

    // Find the node before which we need to insert p
    Node *temp = (*head)->next;
    while ((temp->ratingData) < (curr->ratingData))
        temp = temp->next;

    // Insert new node before temp
    (temp->prev)->next = curr;
    curr->prev = temp->prev;
    temp->prev = curr;
    curr->next = temp;
}

void printList(Node *temp)
{
    while (temp != NULL)
    {
        cout << fixed << setprecision(1);
        cout << temp->ratingData << " " << temp->titleData << endl;
        temp = temp->prev;
    }
}