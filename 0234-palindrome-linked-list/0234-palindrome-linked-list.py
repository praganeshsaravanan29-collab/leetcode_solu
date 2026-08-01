class Solution:
    def reverse(self, head):
        curr = head
        prev = None

        while curr is not None:
            front = curr.next
            curr.next = prev
            prev = curr
            curr = front

        return prev

    def isPalindrome(self, head):

    
        if head is None or head.next is None:
            return True

        slow = head
        fast = head

        while fast.next is not None and fast.next.next is not None:
            slow = slow.next
            fast = fast.next.next

        # Reverse second half
        new_head = self.reverse(slow.next)

        first = head
        sec = new_head

        while sec is not None:
            if first.val != sec.val:
                self.reverse(new_head)
                return False

            first = first.next
            sec = sec.next

        self.reverse(new_head)

        return True