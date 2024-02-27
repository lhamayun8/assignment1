
'''calculator'''

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y != 0:
        return x / y
    else:
        return "Cannot divide by zero."

def factorial(x):
    if x == 0 or x == 1:
        return 1
    else:
        return x * factorial(x-1)

def factorial(y):
    if y == 0 or y == 1:
        return 1
    else:
        return y * factorial(y-1)

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
operation = input("Enter operation (+, -, *, /, %x, %y): ")

if operation == '+':
    result = add(num1, num2)
elif operation == '-':
    result = subtract(num1, num2)
elif operation == '*':
    result = multiply(num1, num2)
elif operation == '/':
    result = divide(num1, num2)
elif operation== '%x':
    result=factorial(num1)
elif operation== '%y':
    result=factorial(num2)
else:
    result = "Invalid operation"

print(f"The result is: {result}")
