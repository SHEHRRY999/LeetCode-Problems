"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head:
            return None
        m = {}
        newHead = Node(head.val)
        oldTemp = head.next
        newTemp = newHead
        m[head] = newHead

        while oldTemp:
            copyNode = Node(oldTemp.val)
            m[oldTemp] = copyNode
            newTemp.next = copyNode
            oldTemp = oldTemp.next
            newTemp = newTemp.next
        oldTemp = head
        newTemp = newHead
        while oldTemp:
            newTemp.random = m.get(oldTemp.random)
            oldTemp = oldTemp.next
            newTemp = newTemp.next
        return newHead