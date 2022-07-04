# conditional basics
count=-10 # Declaring a variable
if (( $count == 12 ))
then
    echo "The no is equal to 12"
elif (( $count < 0 ))
then
    echo "The no is negative"

else
    echo "The condition is false"
fi  # End of conditional statement
