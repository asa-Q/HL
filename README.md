#HL Foundation 
#2020.11.04 in Shanghai

1. install ganache-cli

https://github.com/trufflesuite/ganache-cli/archive/develop.zip
npm install

2. pip3 install aiml

3. dele too big file

git filter-branch --force --index-filter "git rm --cached --ignore-unmatch badFileName"  --prune-empty --tag-name-filter cat -- --all

git commit --amend -CHEAD

git push origin master

4. install docker lighthouse

https://lighthouse-book.sigmaprime.io/intro.html

set in windows 10

docker pull sigp/lighthouse

docker run -p 9000:9000 -p 127.0.0.1:5052:5052 -v /asa/lighthouse:/root/.lighthouse sigp/lighthouse lighthouse --network mainnet beacon --http --http-address 0.0.0.0



