import numpy as np
import matplotlib.pyplot as plt
import argparse
import subprocess

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

def printResults(xAxis1,yAxis1,xAxis2,yAxis2):
    xAxis1 = loadFile(xAxis1)
    yAxis1 = loadFile(yAxis1)
    xAxis2 = loadFile(xAxis2)
    yAxis2 = loadFile(yAxis2)
    
    plt.plot(xAxis1,yAxis1,xAxis2,yAxis2)
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
    parser = argparse.ArgumentParser(description='Generate sine wave / Print result after filtering')
    parser.add_argument('--full-process', action = 'store_true')
    parser.add_argument('--generate-sine', action = 'store_true')
    parser.add_argument('--print-results', action = 'store_true')
    args = parser.parse_args()

    if args.full_process and (not args.generate_sine) and (not args.print_results):
        t,y = generateSine(f = 1, fs = 500, tStart = 0, tStop = 2, meanNoise = 0, pNoise = 0.1)
        saveFile('t',t)
        saveFile('y',y)
        writeCoefFile(N=20)
        writeDataFile(y)
        subprocess.call(['g++','./linearFirFilter.cpp'])
        subprocess.call('./a.out')
        printResults('t','y','t','yFilt')
    elif (not args.full_process) and args.generate_sine and (not args.print_results):
        t,y = generateSine(f = 1, fs = 500, tStart = 0, tStop = 2, meanNoise = 0, pNoise = 0.1)
        saveFile('t',t)
        saveFile('y',y)
        writeCoefFile(N = 5)
        writeDataFile(y)
    elif (not args.full_process) and (not args.generate_sine) and args.print_results:
        printResults('t','y','t','yFilt')
    else:
        print('It is necessary to introduce only 1 option: --full-process/--generate-sinc/--print-results')    