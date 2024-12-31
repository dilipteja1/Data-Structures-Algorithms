"""tree data structure"""
from collections import deque
def addEdge(x, y, adj):
    adj[x].append(y)
    adj[y].append(x)

def printParents(node, adj, parent):
    if parent == 0:
        print("{}-> Root".format(node))
    else: 
        print("{} -> {}".format(node, parent))
    
    for curr_node in adj[node]:
        # for a lead node, the adj list will only have the parent but not the children
        if curr_node!= parent:
            printParents(curr_node, adj, node)

def printChildren(node, adj):
    # visited array
    vis = [0] * len(adj)

    # queue
    q = deque()
    q.append(node)
    while len(q) >0:
        #get the left most node
        node = q.popleft()
        vis[node] = 1
        # print all its children
        for curr_node in adj[node]:
            # only print if the node is not visited 
            if vis[curr_node] == 0:
                print("{} -> {}".format(node, curr_node))
                q.append(curr_node)
    
def printLeafNodes(node, adj):
    for index in range(len(adj)):
        if adj[index] == 0:
            continue
        else:
            if len(adj[index]) == 1:
                print("{} ".format(index))


            
N = 7 
Root = 1
adj  = [[] for _ in range(N+1)]

# add edges
addEdge(1, 2, adj)
addEdge(1, 3, adj)
addEdge(1, 4, adj)
addEdge(2, 5, adj)
addEdge(2, 6, adj)
addEdge(4, 7, adj)

# print parents of each node
# printParents(Root, adj, 0)

# Print children of each node 
# printChildren(Root, adj)

# # print leaf nodes
printLeafNodes(Root, adj)
