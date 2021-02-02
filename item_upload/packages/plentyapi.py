import requests

creds = {"username":"basti_panasiam", "password":""}
r = requests.post("https://panasiam.plentymarkets-cloud01.com/rest/login",
                  params=creds)

with open('test.txt', 'wb') as fd:
    for chunk in r.iter_content(chunk_size=128):
        fd.write(chunk)
