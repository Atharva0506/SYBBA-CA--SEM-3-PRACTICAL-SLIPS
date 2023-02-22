#Consider Weather dataset
#i) Selecting using the column number
#ii) Selecting using the column name
#iii) Make a scatter plot to compare Wind speed and temperature

# create weather dataset
temperature <- c(25, 28, 30, 35, 20, 18, 15, 10, 8, 12)
wind_speed <- c(3, 5, 4, 6, 2, 5, 7, 10, 12, 15)
humidity <- c(80, 70, 60, 50, 40, 45, 55, 65, 75, 85)

weather_data <- data.frame(temperature, wind_speed, humidity)

# i) Selecting using the column number
column_number <- 2
selected_column <- weather_data[, column_number]

# ii) Selecting using the column name
column_name <- "wind_speed"
selected_column <- weather_data[, column_name]

# iii) Make a scatter plot to compare Wind speed and temperature
plot(weather_data$wind_speed, weather_data$temperature, xlab = "Wind Speed (mph)", ylab = "Temperature (F)", main = "Wind Speed vs Temperature")

