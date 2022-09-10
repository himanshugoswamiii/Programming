# Way - 1
# 1. Import the requests library
import requests

URL = "https://instagram.com/favicon.ico"

# 2. Download the data behind the URL
response = requests.get(URL)

# 3. Open the response into a new file
open("instagram.ico","wb").write(response.content)
