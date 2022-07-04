import pyautogui as pya
import pyperclip  # handy cross-platform clipboard text handler
import time

def copy_clipboard():
    pya.hotkey('ctrl', 'c')
    time.sleep(.01)  # ctrl-c is usually very fast but your program may execute faster
    return pyperclip.paste()

# double clicks on a position of the cursor
pya.doubleClick(pya.position())

list = []
var = copy_clipboard()
list.append(var) 
print(list)
