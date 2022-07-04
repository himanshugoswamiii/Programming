def readfile(fName):
    f=open(fName,"r")
    # reading each line    
    lst=f.readlines() # Reading into a list
    #Remove the \n from the list
    # Using strip function
    for i in range(len(lst)):
        lst[i]=lst[i].strip()
    print(lst)
    f.close()
    return lst

def mydict(word):
    lst=readfile("mywords.txt")
    for i in word:
        lst.append(i)
    print(sorted(lst))
    lst=sorted(lst)
    print(lst)
    mystr=str()
    for i in lst:
        mystr+=i+"\n"
    fileHandler=open("mywords.txt","w")
    fileHandler.write(mystr)
    fileHandler.close()  




def spellcheck(fName):
    try:
        f=open(fName,"r")
        lst=readfile("mywords.txt")
    except Exception as e:
        print(e)
    outlist=[] # Output list of all the words that are not in File
    for line in f:
       
            # reading each word        
            for word in line.split():
       
                # Add the words which are not in the dictionary
                if word not in lst:
                    outlist.append(word)


    f.close()
    return outlist

# Enter the word int the dictionary
words=spellcheck("ok.txt")
print("Words not found in the dictionary file",words)
x=int(input("Enter 1 to add words into the file"))
if x==1:
    w=mydict(words)
print("Current dictionary",readfile("mywords.txt"))


