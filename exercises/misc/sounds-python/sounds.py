import os
import time


for i in range(1, 500):
    os.system(f"play -nq -t alsa synth 0.05 sine {i%50 * 100}")
 