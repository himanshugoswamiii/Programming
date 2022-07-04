if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    sum=0
    for i in range(3):
        sum+=student_marks[query_name][i]
    print("{:.2f}".format(sum/3))

#mydict=dict()
#
## Driver's Code
## Getting input in the dictionary
#n=int(input())
#for i in range(n):
#    stu=input().split()
#    stu=list(stu)
#    print(stu)
#    mydict[stu[0]]=stu[1:]
#
#name=input()
#avg=(float(mydict[name][0])+float(mydict[name][1])+float(mydict[name][2]))/3
#print(avg)

#--- Using hackerrank code
