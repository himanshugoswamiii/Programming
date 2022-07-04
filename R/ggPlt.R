library(ggplot2)
# Here BOD is the already available data set in R
ggplot(data = BOD,
       mapping = aes(x = Time, y = demand)) +
  geom_point(size=4)+
  geom_line(color = "red")


