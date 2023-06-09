class Node:
    def __init__(self, data):
        self.data = data
        self.next = None # nullptr

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        """
        adds to the end of the linked list
        """
        nextNode = Node(data)

        if self.head == None:
            self.head = nextNode
        else:
            curr = self.head
            while(curr.next != None):
                curr = curr.next

            curr.next = nextNode

    def delete(self, data):
        """
        deletes the first occurence of the following data from the linked
        """
        if self.head is None: # Demonstrating use of is in place of =
            return

        if self.head.data is data:
            self.head = self.head.next

        prev = self.head
        curr = self.head.next
        while (curr is not None):
            if curr.data is data:
                prev.next = curr.next
                return
            prev = curr
            curr = curr.next

    def display(self):
        curr = self.head
        while curr != None:
            print(curr.data)
            curr = curr.next

if __name__=="__main__":
    linked_list = LinkedList()

    linked_list.append(1)
    linked_list.append(2)
    linked_list.append(3)
    linked_list.delete(4)
    linked_list.delete(2)

    linked_list.display()
