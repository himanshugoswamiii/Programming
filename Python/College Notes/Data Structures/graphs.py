import numpy as np
 
# keep vertices in a set
vertices = {0, 1, 2, 3, 4, 5}
# keep edges in a set
edges = {(0, 1), (1, 2), (0, 3), (1, 3), (3, 4), (2, 5), (4, 5), (2, 4)}

# create a 6X6 integer numpy array with all values initialised to zero
adjacencyMatrix = np.zeros((6, 6)).astype(int)
# Represent edges in the adjacency matrix
for edge in edges:
    v1 = edge[0]
    v2 = edge[1]
    adjacencyMatrix[v1][v2] = 1
    adjacencyMatrix[v2][v1] = 1 # if v1 is connected to v2, v2 is also connected to v1
print("The set of vertices of the graph is:")
print(vertices)
print("The set of edges of the graph is:")
print(edges)
print("The adjacency matrix representing the graph is:")
print(adjacencyMatrix)
