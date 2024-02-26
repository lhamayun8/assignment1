'''A company insures its drivers in the following cases: 
− If the driver is married. 
− If the driver is unmarried, male & above 30 years of age. 
− If the driver is unmarried, female & above 25 years of age. 
In all other cases the driver is not insured. If the marital status,
gender and age of the driver are the inputs, write a programme to
determine whether the driver is to be insured or not
Hint: For marital status you may ask user to enter 0 for
married and 1 for unmarried. You may ask user to enter 0 for male and
1 for female.'''
status=int(input("enter 0 for maarried and 1 for unmarried"))
gender=int(input("enter 0 if male and 1 for female"))
age=int(input("enter age"))
if (status==0):
    print("the driver is insured")
elif(status==1):
    if gender==0 and age>30:
        print("driver is insured")
    elif gender==1 and age>25:
        print("driver is insured")
    else:
        print("the driver is not insured")
else:
    print("enter valid number")
