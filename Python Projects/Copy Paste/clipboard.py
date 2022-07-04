import pyperclip as pc
x="Data copied using pyperclip"
pc.copy(x)
y=pc.copy(x)
print(pc.paste(y))
