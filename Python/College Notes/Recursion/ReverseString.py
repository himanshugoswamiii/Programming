def myStrRevRecu(str1):
  if str1=="":
    return ""
  print(str1[-1],str1[:-1],sep=", ") # Simply Printing for our Simplicity
  return str1[-1]+myStrRevRecu(str1[:-1]) # String Concatenation
  # We're simply returning a new string

# Driver's Code
str1="Hello World"
print(myStrRevRecu(str1))
