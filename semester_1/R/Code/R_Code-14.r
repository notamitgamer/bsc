# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write an if...else if...else block that evaluates a newly created temperature variable.
# * If the temperature is strictly greater than 30, print: "30+ is too hot!"
# * If the temperature is between 20 and 30 (inclusive), print: "Perfect weather."
# * Otherwise, print: "It is quite cold." 

temperature <- 29
if(temperature > 30) {
    print("30+ is too hot!")
} else if(temperature >= 20 && temperature <= 30) {
    print("Perfect weather")
} else {
    print("It is quite cold.")
}