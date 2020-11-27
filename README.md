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

