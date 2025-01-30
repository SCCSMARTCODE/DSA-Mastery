# Graph Representation Project

## Overview
This project implements **two graph representations**:
1. **Adjacency Matrix**
2. **Adjacency List**

The program provides an **interactive menu** that allows users to:
- Choose between adjacency matrix or adjacency list representation.
- Add and remove edges.
- Check connectivity between nodes.
- Print the graph representation.

The implementation focuses on **undirected graphs** and ensures that operations are efficient and well-structured.

---
## Folder Structure
```
graph_representation/
        ├── main.py         # Entry point, handles user interaction
        ├── utils.py        # Helper functions (validations, formatting, etc.)
        ├── matrix_rep.py   # Manages adjacency matrix operations
        ├── list_rep.py     # Manages adjacency list operations
        ├── README.md       # Project documentation (this file)
```

---
## Features
### ✅ Adjacency Matrix (`matrix_rep.py`)
- Uses a **2D array** to store edges.
- Efficient **edge lookup**.
- **Memory-intensive** for large graphs.

### ✅ Adjacency List (`list_rep.py`)
- Uses a **linked list** for each node.
- **Memory-efficient** for sparse graphs.
- **Faster insertions** compared to matrices.

### ✅ User Interaction (`main.py`)
- **Command-line interface** for ease of use.
- Allows switching between representations.
- **Error handling** for invalid inputs.

---
## How to Run the Program
1. **Clone the Repository** (if applicable):
   ```bash
   git clone https://github.com/SCCSMARTCODE/DSA-Mastery
   cd 3_Graphs/Graph_Representations
   ```
2. **Run the script:**
   ```bash
   python main.py
   ```
3. Follow the **on-screen menu prompts** to interact with the graph.

---
## Example Usage
```
Welcome to the Graph Representation Program!
Choose Graph Representation:
1. Adjacency Matrix
2. Adjacency List
Enter choice (1 or 2): 1

Enter the number of nodes: 4

Menu:
1. Add Edge
2. Remove Edge
3. Check Connectivity
4. Print Graph
5. Exit
Enter your choice: 1
Enter first node: 0
Enter second node: 1
Edge added.
```

---
## Future Enhancements
- ✅ Implement **weighted graphs**
- ✅ Add **directed graph support**
- ✅ Implement **graph traversal algorithms (BFS, DFS)**

---
Developed as part of a learning project on **Graph Data Structures**. 🚀

