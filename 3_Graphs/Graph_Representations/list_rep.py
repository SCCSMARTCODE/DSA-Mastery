from typing import List


class AdjacencyList:
    class Node:
        def __init__(self, idx):
            self.idx = idx
            self.next = None

    def __init__(self, num_nodes: int):
        self.rel_list: List[AdjacencyList.Node] = [AdjacencyList.Node(_) for _ in range(num_nodes)]

    def add_edge(self, u: int, v: int):
        if u == v:  # Avoid self-loops
            return

        if not self._edge_exists(u, v):
            current_node = self.rel_list[u]
            while current_node.next:
                current_node = current_node.next
            current_node.next = AdjacencyList.Node(v)

            if not self._edge_exists(v, u):
                current_node = self.rel_list[v]
                while current_node.next:
                    current_node = current_node.next
                current_node.next = AdjacencyList.Node(u)

    def _edge_exists(self, u: int, v: int) -> bool:
        """Helper method to check if an edge exists between u and v."""
        current_node = self.rel_list[u]
        while current_node:
            if current_node.idx == v:
                return True
            current_node = current_node.next
        return False

    def remove_edge(self, u: int, v: int):
        self._remove_single_edge(u, v)
        self._remove_single_edge(v, u)

    def _remove_single_edge(self, u: int, v: int):
        current_node = self.rel_list[u]
        prev_node = None
        while current_node:
            if current_node.idx == v:
                if prev_node:
                    prev_node.next = current_node.next
                else:
                    self.rel_list[u] = current_node.next
                return
            prev_node = current_node
            current_node = current_node.next

    def is_connected(self, u: int, v: int) -> bool:
        """Check if there is a direct edge between u and v."""
        return self._edge_exists(u, v)

    def print_graph(self):
        """Print the adjacency list representation of the graph."""
        for i in range(len(self.rel_list)):
            current_node = self.rel_list[i]
            edges = []
            while current_node:
                edges.append(current_node.idx)
                current_node = current_node.next
            print(f"{i}: {' -> '.join(map(str, edges))}")