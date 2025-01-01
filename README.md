# W10---Graph-Traversal
Graph-Traversal overview

Vertices: {0, 1, 2, 3, 4}

Egdes: : {(0,1), (0,4), (1,2), (1,3), (3,4)}

DFS Traversal

    . DFS uses a stack (or recursion) to traverse as deeply as possible before backtracking.

    . Starting from vertex 0, the traversal explores the graph in the following order:
        Visit 0 → Go to 1 → Visit 2 → Backtrack → Visit 3 → Visit 4.

    --> Result: 0 1 2 3 4

BFS  Traversal

    . BFS uses a queue to explore all neighbors at the current level before moving to the next level.

    . Starting from vertex 0, the traversal explores the graph in the following order:
        Visit 0 → Visit 1 and 4 → Visit 2 → Visit 3.

    --> Result: 0 1 4 2 3

Observations

    . The choice between DFS and BFS should depend on the graph structure and the specific problem requirements.

    . Both algorithms ensure all nodes are visited if the graph is connected, but the sequence of traversal differs, impacting the interpretation of results.

    DFS:
    . Explores deeply before backtracking using a stack.

    . Pushes neighbors in reverse order to maintain traversal order.

    . Suitable for tasks like cycle detection and pathfinding.

    BFS:
    . Explores level by level using a queue.

    . Processes nodes in the order they are encountered.
    
    . Ideal for finding shortest paths in unweighted graphs.