age = int(input("how old are you?\n"))
if age >= 18:
    print("you are old enough to vote!")
elif age <18:
    print("you are not old enough to vote:(")
elif age <16:
    print("you are not old enough to drive:(")
elif age <15:
    print("you are not old enough to get your learners permit:(")
elif age <5:
    print("you are not old enough to go to school:(")
else:
    print("you are too young to go to school")