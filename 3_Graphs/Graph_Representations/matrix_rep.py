

class AdjacencyMatrix:
    def __init__(self, num_nodes: int):
        self.rel_matrix = [[0 for _ in range(num_nodes)] for _ in range(num_nodes)]

    def add_edge(self, u: int, v: int):
        self.rel_matrix[u][v] = 1
        self.rel_matrix[v][u] = 1

    def remove_edge(self, u: int, v: int):
        self.rel_matrix[u][v] = 0
        self.rel_matrix[v][u] = 0

    def is_connected(self, u: int, v: int) -> bool:
        return self.rel_matrix[u][v] == 1

    def print_graph(self):
        for row in self.rel_matrix:
            for _object in row:
                print(_object, end=" ")
            print("")