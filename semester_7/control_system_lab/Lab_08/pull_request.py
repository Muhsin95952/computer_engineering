import requests

url = "https://api.github.com/repos/facebook/react/pulls"
response = requests.get(url)

if response.status_code == 200:
    print(response.json())
else:
    print(f"Error: {response.status_code}")
