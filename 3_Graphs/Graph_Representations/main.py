import sys
from utils import get_valid_int
from matrix_rep import AdjacencyMatrix
from list_rep import AdjacencyList


def main():
    print("Welcome to the Graph Representation Program!")

    # Choose representation
    print("Choose Graph Representation:")
    print("1. Adjacency Matrix")
    print("2. Adjacency List")

    choice = get_valid_int("Enter choice (1 or 2): ", [1, 2])

    num_nodes: int = get_valid_int("Enter the number of nodes: ")

    if choice == 1:
        graph = AdjacencyMatrix(num_nodes)
    else:
        graph = AdjacencyList(num_nodes)

    while True:
        print("\nMenu:")
        print("1. Add Edge")
        print("2. Remove Edge")
        print("3. Check Connectivity")
        print("4. Print Graph")
        print("5. Exit")

        option = get_valid_int("Enter your choice: ", [1, 2, 3, 4, 5])

        if option == 1:
            u = get_valid_int("Enter first node: ", range(num_nodes))
            v = get_valid_int("Enter second node: ", range(num_nodes))
            graph.add_edge(u, v)
        elif option == 2:
            u = get_valid_int("Enter first node: ", range(num_nodes))
            v = get_valid_int("Enter second node: ", range(num_nodes))
            graph.remove_edge(u, v)
        elif option == 3:
            u = get_valid_int("Enter first node: ", range(num_nodes))
            v = get_valid_int("Enter second node: ", range(num_nodes))
            connected = graph.is_connected(u, v)
            print(f"Nodes {u} and {v} are {'connected' if connected else 'not connected'}.")
        elif option == 4:
            graph.print_graph()
        else:
            print("Exiting the program. Goodbye!")
            sys.exit()


if __name__ == "__main__":
    main()
