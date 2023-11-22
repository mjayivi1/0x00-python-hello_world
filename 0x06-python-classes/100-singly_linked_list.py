#!/usr/bin/python3
class Node:
    """Class Node that defines a node of a singly linked list"""
    def __init__(self, data, next_node=None):
        self.data = data
        self.next_node = next_node

class SinglyLinkedList:
