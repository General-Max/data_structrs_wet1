//
// Created by User on 21/11/2022.
//

#ifndef DATA_STRUCTRS_WET1_NODETREE_H
#define DATA_STRUCTRS_WET1_NODETREE_H


class Node{
public:
    Node();

    int getValue() const;

    int getHeight() const;

    Node* getRight();

    Node* getLeft();

    void setValue(int newValue);

    void setHeight(int newHeight);

    void setRight(Node* newNode);

    void setLeft(Node* newNode);

    void updateHeight();

private:
    int m_value;
    Node *m_right;
    Node *m_left;
    int m_height;
};

int nodeHeight(Node* node);

#endif //DATA_STRUCTRS_WET1_NODETREE_H
