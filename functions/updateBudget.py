print("Hello! This is a financail caculator!")
income = float(input("how much do you make a month?:\n"))
rent = float(input("how much doess your rent cost?:\n"))
utilities = float(input("what does your utilities cost?:\n"))
groceries = float(input("how much does your groceries cost?:\n"))
transportation = float(input("how much does your trasportation cost:\n"))
print("you make", income)
savings = income*0.2
expenses= rent + utilities + groceries + transportation
spending = income-expenses-savings

def input_value(type, amount):
    var = type

    return f"what is your monthly {type}?", amount

print("your income is", income)
print("your rent is", rent)
print("your utilities is", utilities)
print("your groceries is", groceries)
print("your transportation is", transportation)
print("your savings is", savings)
print("your expenses is", expenses)
print("your spending is", spending)
def percent(type, amount):
    per = amount/income *100

    return(f"your {type} is {per}% income.")

print(f"your monthly income are ${income:.2f}\n")
print(f"your monthly expenses is ${expenses:.2f}\n")
print(f"your monthly saving are ${savings:.2f}\n")
print(f"your monthly spending are ${spending:.2f}\n")
print(percent ("rent", rent))
print(percent ("utilities", utilities))
print(percent ("groceries", groceries))
print(percent ("transportation", transportation))
print(percent ("spending", spending))
print(percent ("expenses", expenses))