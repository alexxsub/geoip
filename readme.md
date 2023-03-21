# install
```bash
python3 -m venv venv
source venv/bin/activate
pip install -r requirements.txt
```

# run
```bash
./test.py
```

# compile python
```bash
pip install pyinstaller 
pyinstaller test.py --onefile
```
# run compiled pyhon example
```bash
cd dist
./test
```

# compile c++ example for ubuntu 22
## install dependences
```bash
sudo apt update && apt libcurl4-openssl-dev
```
## compile example
```bash
g++ test.cc -o cpptest -lcurl
```
## run
```bash
./cpptest
```