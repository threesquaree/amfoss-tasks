import argparse
import requests
import urllib.request

parser = argparse.ArgumentParser(description='fetch image from rover')
parser.add_argument('id', type=int, help='Enter id')
parser.add_argument('date', help='Enter date')
args = parser.parse_args()
id = args.id
date = args.date
api_key = 'lbFu4M0evI2JQX1tIh7ziCJILXMUUs2FrbffJNmf'
url = f'https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date={date}&api_key={api_key}'
r = requests.get(url)
data = r.json()['photos']

found = False
for photo in data:
    if photo['id'] == id:
        urllib.request.urlretrieve(photo['img_src'], 'newimage.jpg')
        found = True
        break
    elif photo['earth_date'] == date:
        urllib.request.urlretrieve(photo['img_src'], 'newimage.jpg')
        found = True
        break

if not found:
    print('No image found with the given ID or date')
