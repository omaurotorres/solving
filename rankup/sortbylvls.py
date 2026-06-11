# tree_by_levels(Node(Node(None, Node(None, None, 4), 2), Node(Node(None, None, 5), Node(None, None, 6), 3), 1))

class Node:
    def __init__(self, L, R, n):
        self.left = L
        self.right = R
        self.value = n

def tree_by_levels(node):
    # this is a bredth-first search problem!
    result = []
    queue = [node]

    while len(queue) != 0:
        x = queue.pop()

        if x:
            queue.insert(0, x.left)
            queue.insert(0, x.right)
            result.append(x.value)
        
    return result
