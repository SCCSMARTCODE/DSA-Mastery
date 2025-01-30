

def get_valid_int(prompt, valid_range=None):
    while True:
        try:
            value = int(input(prompt))
            if valid_range and value not in valid_range:
                print(f"Please enter a valid choice: {valid_range}")
                continue
            return value
        except ValueError:
            print("Invalid input. Please enter an integer.")