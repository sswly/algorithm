#algorithm

##Help
* github

```bash
git config --global user.name "XXXX"
git config --global user.email "XXXX"
git config --global http.proxy http://XXXX:8080

mkdir repo_dir
cd repo_dir
git init
git pull https://github.com/sswly/algorithm.git master
... # change by yourself
git add *.c # add new file to github
git commmit -m "comments of commit"
git remote add original https://github.com/sswly/algorithm.git
git push original master
```
