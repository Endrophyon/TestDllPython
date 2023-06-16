from ctypes import *
import time
import os
import sys
def ConnectDLL():
    if(sys.platform == "win32"):
        library = cdll.LoadLibrary(os.getcwd() + "\\TestDllPython.dll")
    else:
        library = cdll.LoadLibrary(os.getcwd() + "\\TestDllPython.lib")
    library.TestMsg()
    time.sleep(3000)
    exit(32)
if __name__ == "__main__":
    ConnectDLL() #Connecting DLL via TestDllPython :D