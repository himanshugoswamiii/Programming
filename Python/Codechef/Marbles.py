n=int(input())
for i in range(n):
    l=int(input())
    S=input()
    P=input()
    count=0
    myList=list() # Empty List
    # myList is the list of occurences of a work that is against the question mark
    for j in range(l):
        # Replacing ? with exact same character
        if (S[j]=='?' and P[j]!='?'):
            myList.append(P[j])
        if (S[j]!='?' and P[j]=='?'):
            myList.append(S[j])
        else:
            myList.append(' ')
    el=max(myList)
    # Replacing every question with element el
    if '?' in S:
        S=S.replace('?',el)
    if '?' in P:
        P=P.replace('?',el)

    for j in range(l):
        if S[j]==P[j]:
            continue
        if ((S[j] not in 'aeiou') and (P[j] not in 'aeiou')) or ((S[j] in 'aeiou') and (P[j] in 'aeiou')):
            count+=2
        else:
            count+=1
    print(count)
