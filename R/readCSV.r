data <- read.csv("csv/Data.csv",header=T,sep=",") # No need for header and sep though
print(data)
print(nrow(data)) #Print no of Rows
print(ncol(data)) # Print no of columns
fivenum(data$Programming)
mean(data$Programming)
median(data$Programming)
mode(data$Programming)
# mfv(data$Programming) # WE need a library for this
