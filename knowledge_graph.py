import json
import urllib.request
import urllib.parse

# Replace with your actual API Key from Google Cloud Console
API_KEY = 'YOUR_API_KEY'
query = 'Amit Dutta notamitgamer' 
service_url = 'https://kgsearch.googleapis.com/v1/entities:search'

params = {
    'query': query,
    'limit': 5, # Increased limit to see if there are multiple Amit Duttas
    'indent': True,
    'key': API_KEY,
}

url = service_url + '?' + urllib.parse.urlencode(params)

try:
    response = json.loads(urllib.request.urlopen(url).read())

    print(f"{'Name':<20} | {'Score':<10} | {'ID':<20}")
    print("-" * 55)

    if response.get('itemListElement'):
        for element in response['itemListElement']:
            result = element['result']
            score = element.get('resultScore')
            name = result.get('name')
            kg_id = result.get('@id')
            
            # This prints the same data structure as the Taylor Swift example
            print(f"{name:<20} | {score:<10.2f} | {kg_id:<20}")
            
            # Check for description or detailed data
            description = result.get('description', 'No description yet')
            print(f"   -> Info: {description}")
            print(f"   -> Types: {', '.join(result.get('@type', []))}\n")
    else:
        print("No entity found in the Knowledge Graph yet.")

except Exception as e:
    print(f"An error occurred: {e}")