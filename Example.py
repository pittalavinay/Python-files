print("hello")

first_name = "Settipalli"
last_name = "Surya"

print(f"Full Name: {first_name} {last_name}")

length = float(input("Enter length of the rectangle: "))

breadth = float(input("Enter braedth of the rectangle: "))

area = length * breadth
print(f"Area of the rectangle: {area}")

radius = float(input("Enter the radius: "))
import math
circle_area = 2*math.pi*radius

print(f"Area of the cricle is: {circle_area}")



text = input("Enter a string: ")

# Remove spaces and convert to lowercase for accurate comparison
cleaned_text = text.replace(" ", "").lower()

if cleaned_text == cleaned_text[::-1]:
    print("It is a palindrome.")
else:
    print("It is not a palindrome.")
