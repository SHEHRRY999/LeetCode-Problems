"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def flatten(self, head: 'Node') -> 'Node':
        if not head:
            return head
        curr = head
        while curr:
            if curr.child:
                nxt = curr.next
                curr.next = self.flatten(curr.child)
                curr.next.prev = curr
                curr.child = None
                while curr.next:
                    curr = curr.next
                if nxt:
                    curr.next = nxt
                    nxt.prev = curr
            curr = curr.next
        return head