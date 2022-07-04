import matplotlib.pyplot as plt # Importing the module for plotting the vector
plt.quiver([0],[0], [4], [5], angles='xy',scale_units='xy', scale=1)
# Here 0,0 is used so that vector starts from origin
plt.xlim(-10,10) # Limits of the x-axis
plt.ylim(-10,10)
plt.show()
