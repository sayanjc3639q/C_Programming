# simple calculator for terminal

import sys
def add(x, y):
    """Add two numbers."""
    return x + y
def subtract(x, y):
    """Subtract two numbers."""
    return x - y
def multiply(x, y):
    """Multiply two numbers."""
    return x * y
def divide(x, y):
    """Divide two numbers."""
    if y == 0:
        return "Error! Division by zero."
    return x / y
def main():
    if len(sys.argv) != 4:
        print("Usage: python app.py <num1> <operation> <num2>")
        print("Operations: add, subtract, multiply, divide")
        return

    num1 = float(sys.argv[1])
    operation = sys.argv[2]
    num2 = float(sys.argv[3])

    if operation == "add":
        result = add(num1, num2)
    elif operation == "subtract":
        result = subtract(num1, num2)
    elif operation == "multiply":
        result = multiply(num1, num2)
    elif operation == "divide":
        result = divide(num1, num2)
    else:
        print("Invalid operation. Use add, subtract, multiply, or divide.")
        return

    print(f"Result: {result}")
if __name__ == "__main__":
    main()
# To run this script, use the command line:
# python app.py <num1> <operation> <num2>
# Example: python app.py 10 add 5
# This will output: Result: 15.0
# Example: python app.py 10 divide 0
