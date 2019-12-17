import sys


class Node:
    def __init__(self, data):
        self.right = self.left = None
        self.data = data


class Solution:
    def insert(self, root, data):
        if root == None:
            return Node(data)
        else:
            if data <= root.data:
                cur = self.insert(root.left, data)
                root.left = cur
            else:
                cur = self.insert(root.right, data)
                root.right = cur
        return root

    # --------------------------------------------------------------
    # levelOrder func
    #  Prints the  data value of each node in the tree's levelOrder traversal
    def levelOrder(self, root):
        output = ""
        queue = [root]
        while queue:
            node = queue.pop(0)
            output += str(node.data) + " "
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)
        print(output[:-1])
    # --------------------------------------------------------------


T = int(input())
myTree = Solution()
root = None
for i in range(T):
    data = int(input())
    root = myTree.insert(root, data)
myTree.levelOrder(root)
