print("Hello! This is a financial caculator!")
income=float(input("how much do you make a month?:\n"))
rent=float(input("how much doess your rent cost?:\n"))
utilities=float(input("what does your utilities cost?:\n"))
groceries=float(input("how much does your groceries cost?:\n"))
transportation=float(input("how much does your trasportation cost:\n"))
savings = income *.2
expenses= rent + utilities + groceries + transportation
spending = income-expenses-savings

def percent(type, amount):
    per = amount/income *100

    return f"your {type} is {per}% income."
    
print(f"your monthly income is ${income: .2f}\n")
print(f"your monthly expenses is ${expenses: .2f}\n")
print(f"your monthly savings is ${savings: .2f}\n")
print(f"your monthly spending money is ${spending: .2f}\n")
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("savings", savings))
print(percent("expenses", expenses))