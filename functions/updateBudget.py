print("Hello! This is a financail caculator!")
income = float(input("how much do you make a month?:\n"))
rent = float(input("how much doess your rent cost?:\n"))
utilities = float(input("what does your utilities cost?:\n"))
groceries = float(input("how much does your groceries cost?:\n"))
trasnportation = float(input("how much does your trasportation cost:\n"))
print("you make", income)
savings = income*0.2
expenses= rent + utilities + groceries + trasnportation
spending = income-expenses-savings
def percent(type, amount):
    per = amount/income *100

    print(f"your {type} is {per}% income.")

print(f"your income are", expenses)
print(f"your expenses is", rent)
print(f"your saving are", utilities)
print(f"your spending are", groceries)
print(f"your trasnportation cost is", trasnportation)
