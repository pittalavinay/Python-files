'''x = 10

y = 20

if y > x :
    print(" y is greater than x ")  
else:
    print(" y is smaller than x")'''

#Mylist = ["Surya", "Hemanth", "Durga"]
'''print(Mylist)
Mylist[0] = "Shiva"
print(Mylist)
Mylist.append("Venkat")
print(Mylist)
print(Mylist [0:2])'''
#Mylist.remove("Surya")
#print(Mylist)

'''Names = ["Surya", "Hemanth", "Durga"]

for x in range(len(Names)) :
    print (Names[x])'''

'''fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

for x in fruits:
    print (x.upper())'''

'''def recursion(n):
    if(n > 0):
      result = n + recursion(n - 1)
      print(result)
    else:
       result = 0
    return result
recursion(6)'''

'''class Myclass:
    x = 5

p1 = Myclass()

print(p1.x)'''

'''class Name:
    def __init__(self, name, age, address):
        self.name = name
        self.age = age
        self.address = address
    
    def details(self):
        print(f"Name is : {self.name}\nAge is : {self.age}\nAddress is : {self.address}")

n = Name("Surya", 23, "Vijayawada")
n.details()'''

'''productNames = ["Mobile", "Earphone", "Bike", "Shirts", "Laptops"]
search = input("Enter the Search Item")
for x in productNames:
    if(search == x):
         print(f"Itesm {search} is found")
         break
    else:
	    print("Sorry No results found")'''

'''from datetime import datetime
months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
for i in months:
days = Month.days()
print(days)'''



'''amount = 10000
def withdraw(draw):
      if(draw < amount):
        balance = (amount - draw) - (amount - draw)*2/100
        print("After Withdraw Balance",balance)
def deposite(depo):
        balance = (amount + depo)
        print("After deposite Balance",balance)
withdraw(2000)   
deposite(1000)'''


'''from datetime import datetime
months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
for i in months:
   day = i.days()
print(day) '''
