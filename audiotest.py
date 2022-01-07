from math import log2, pow

A4 = 440
C0 = A4*pow(2, -4.75)
name = ["C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"]

def pitch(freq):
    h = round(12*log2(freq/C0))
    octave = h // 12
    n = h % 12 + 7
    if n>12:
        n=n%12
    return name[n] + str(octave)

f = 1
print("Pitch in F of "+ str(f) +"Hz: " + pitch(f))
