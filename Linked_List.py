class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

class Linked_List:
    def __init__(self):
        self.head = None
    
    def printList(self):
        temp = self.head
        while temp:
            print(temp.val)
            temp = temp.next
if __name__ == '__main__':

    llist = Linked_List()
    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    llist.head.next = second
    second.next = third

    llist.printList()