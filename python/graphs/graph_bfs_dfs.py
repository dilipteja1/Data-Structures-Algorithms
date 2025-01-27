""" 
    graph bfs and dfs
"""

graph = {
    'a': ['b', 'c'],
    'b':['d'],
    'c':['e'],
    'd':['f'],
    'e':[],
    'f':[]    
}


# iterative dfs using stack
def dfs_iterative(graph, source):
    stk = [source]
    ans = []
    while stk:
        curr_node = stk.pop()
        ans.append(curr_node)
        neighbors = graph[curr_node]
        
        for neighbor in neighbors:
            stk.append(neighbor)
    
    return ans

# recursive dfs
def dfs_recursive(graph, source, ans):
    ans.append(source)
        
    for neighbor in graph[source]:
        dfs_recursive(graph, neighbor, ans)

ans = []
dfs_recursive(graph, 'a', ans)
print(ans)
print(dfs_iterative(graph, 'a'))


