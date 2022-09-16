import numpy as np
import matplotlib.pyplot as plt

def generateSine(f,fs,tStart, tStop, meanNoise, pNoise):
    
    t = np.arange(start=tStart,stop=tStop,step=1/fs)
    x = np.sin(2*np.pi*f*t)
    w = np.random.normal(meanNoise,np.sqrt(pNoise),int((tStop-tStart)/(1/fs)))

    return t,(x+w)

def writeDataFile(y):
    with open('data.h','w') as f:
        f.write(f'int dataSize = {len(y)};\n')
        f.write('double data['+str(len(y))+']= {\n')
        for sample in y:
            f.write(f"{sample},\n")
        f.write('};')
    
def writeCoefFile(N):
    with open('b.h','w') as f:
        f.write(f'int N = {N};\n')
        f.write('double b['+str(N)+']= {\n')
        for i in range(0,N):
            f.write(f"{1/N},\n")
        f.write('};')

def printResults():
    t = loadFile('t')
    y = loadFile('y')
    yFilt = loadFile('yFilt')
    
    plt.plot(t,y,t,yFilt)
    plt.show()

def loadFile(fileName):
    with open(fileName,'r') as f:
        x = [float(line.strip()) for line in f.readlines()]
    return x

def saveFile(fileName,arr):
    with open(fileName,'w') as f:
        for i in arr:
            f.write(str(i)+"\n")

if __name__ == '__main__':
    '''
    t,y = generateSine(f = 1, fs = 500, tStart = 0, tStop = 2, meanNoise = 0, pNoise = 0.1)
    saveFile('t',t)
    saveFile('y',y)
    writeCoefFile(N = 20)
    writeDataFile(y)
    '''

    printResults()
    