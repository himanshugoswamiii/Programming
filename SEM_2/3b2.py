def interleave(str1,str2):
    #res = "".join(i + j for i, j in zip(str1, str2))
    l1=len(str1)
    l2=len(str2)
    for i in range(l1):
        for j in range(l2):
            print(str1+str2)
    
# Given in the program that we have to print

interleave("AB","CD")
