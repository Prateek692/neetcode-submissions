class LinkedList:
    def __init__(self, key=-1, val=-1, next=None):
        self.key = key
        self.val = val
        self.next = next


class MyHashMap:

    def __init__(self):
        self.hash_map = [LinkedList() for _ in range(1000)]

    def put(self, key: int, value: int) -> None:
        current = self.hash_map[key % 1000]

        while current.next:
            if current.next.key == key:
                current.next.val = value
                return
            current = current.next

        current.next = LinkedList(key, value)

    def get(self, key: int) -> int:
        current = self.hash_map[key % 1000].next

        while current:
            if current.key == key:
                return current.val
            current = current.next

        return -1

    def remove(self, key: int) -> None:
        current = self.hash_map[key % 1000]

        while current.next:
            if current.next.key == key:
                current.next = current.next.next
                return
            current = current.next