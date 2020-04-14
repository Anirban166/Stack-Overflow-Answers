// link: https://stackoverflow.com/questions/59438670/how-to-for-loop-files-that-contains-a-certain-string-in-python/59438695#59438695

for name in files:
        if name.endswith('_done'):
            # do what you want
            
import os

dir = '/dir' # paste your current directory here

# the required list is 'files' below:
files = [ f for f in os.listdir(dir) if os.path.isfile(os.path.join(dir,f)) ]
