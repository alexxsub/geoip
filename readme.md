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