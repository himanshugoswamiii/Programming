user_date=input()
date=user_date.split("-")
date_year=date[0]
date_month=date[1]



if(int(date_month) in (1,2,3)):
    quarter=date_year+"-Q1"
elif(int(date_month) in (4,5,6)):
    quarter=date_year+"-Q2"
elif(int(date_month) in (7,8,9)):
    quarter=date_year+"-Q3"
else:
    quarter=date_year+"-Q4"

print(quarter)


