# TODO: Write the functions for arithmatic operations here
# These functions should cover Task 2
def Add(a, b):
    return (a + b)


def Subtract(a, b):
    return (a - b)


def Multiply(a, b):
    return (a * b)


def Divide(a, b):
    try:
        return (a / b)

    except Exception as o:
        print(o)


def Power(a, b):
    return (a ** b)


def Remainder(a, b):
    return (a % b)


# -------------------------------------
# TODO: Write the select_op(choice) function here
# This function sould cover Task 1 (Section 2) and Task 3

def select_op(choice):
    if (choice == '#'):
        return -1

    elif (choice == '$'):
        return 0

    elif (choice in ('+', '-', '*', '/', '^', '%')):
        while True:
            num1 = str(input("Enter first number: "))
            print(num1)
            if num1.endswith('$'):
                return 0
            if num1.endswith('#'):
                return -1
            try:
                x1 = float(num1)
                break
            except:
                print("Not a valid number,please enter again")
                continue

        while True:
            num2 = str(input("Enter second number: "))
            print(num2)
            if num2.endswith('$'):
                return 0
            if num2.endswith('#'):
                return -1
            try:
                x2 = float(num2)
                break
            except:
                print("Not a valid number,please enter again")
                continue
        if choice == '+':
            print(x1, "+", x2, "=", Add(x1, x2))
        elif choice == '-':
            print(x1, "-", x2, "=", Subtract(x1, x2))
        elif choice == '*':
            print(x1, "*", x2, "=", Multiply(x1, x2))
        elif choice == '/':
            print(x1, "/", x2, "=", Divide(x1, x2))
        elif choice == '^':
            print(x1, "^", x2, "=", Power(x1, x2))
        elif choice == '%':
            print(x1, "%", x2, "=", Reminder(x1, x2))
        else:
            print("Something Went Wrong")
    else:
        print("Unrecognized operation")


# End the select_op(choice) function here
# -------------------------------------
# This is the main loop. It covers Task 1 (Section 1)
# YOU DO NOT NEED TO CHANGE ANYTHING BELOW THIS LINE
while True:
    print("Select operation.")
    print("1.Add      : + ")
    print("2.Subtract : - ")
    print("3.Multiply : * ")
    print("4.Divide   : / ")
    print("5.Power    : ^ ")
    print("6.Remainder: % ")
    print("7.Terminate: # ")
    print("8.Reset    : $ ")

    # take input from the user
    choice = input("Enter choice(+,-,*,/,^,%,#,$): ")
    print(choice)
    if (select_op(choice) == -1):
        # program ends here
        print("Done. Terminating")
        exit()

#stage 2
past_calculations = [];


def add(a, b):
    return a + b


def subtract(a, b):
    return a - b


def multiply(a, b):
    return a * b


def divide(a, b):
    try:
        return a / b
    except Exception as e:
        print(e)


def power(a, b):
    return a ** b


def remainder(a, b):
    return a % b


def history():
    if past_calculations:
        for index, calc in enumerate(past_calculations):
            print(calc);
    else:
        print("No past calculations to show")
        return 0;


def select_op(choice):
    if (choice == '?'):
        return history()

    if (choice == '#'):
        return -1
    elif (choice == '$'):
        return 0
    elif (choice in ('+', '-', '*', '/', '^', '%')):
        while (True):
            num1s = str(input("Enter first number: "))
            print(num1s)
            if num1s.endswith('$'):
                return 0
            if num1s.endswith('#'):
                return -1

            try:
                num1 = float(num1s)
                break
            except:
                print("Not a valid number,please enter again")
                continue

        while (True):
            num2s = str(input("Enter second number: "))
            print(num2s)
            if num2s.endswith('$'):
                return 0
            if num2s.endswith('#'):
                return -1
            try:
                num2 = float(num2s)
                break
            except:
                print("Not a valid number,please enter again")
                continue

        result = 0.0
        last_calculation = ""
        if choice == '+':
            result = add(num1, num2)
        elif choice == '-':
            result = subtract(num1, num2)
        elif choice == '*':
            result = multiply(num1, num2)
        elif choice == '/':
            result = divide(num1, num2)
        elif choice == '^':
            result = power(num1, num2)
        elif choice == '%':
            result = remainder(num1, num2)
        else:
            print("Something Went Wrong")

        last_calculation = "{0} {1} {2} = {3}".format(num1, choice, num2, result)
        print(last_calculation)
        past_calculations.append(last_calculation)

    else:
        print("Unrecognized operation")


while True:
    print("Select operation.")
    print("1.Add      : + ")
    print("2.Subtract : - ")
    print("3.Multiply : * ")
    print("4.Divide   : / ")
    print("5.Power    : ^ ")
    print("6.Remainder: % ")
    print("7.Terminate: # ")
    print("8.Reset    : $ ")
    print("8.History  : ? ")

    # take input from the user
    choice = input("Enter choice(+,-,*,/,^,%,#,$,?): ")
    print(choice)
    if (select_op(choice) == -1):
        # program ends here
        print("Done. Terminating")
        exit()