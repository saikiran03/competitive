t = input()
while(t):
    t -= 1
    song_count = input()
    num = song_count
    den = song_count
    tot_songs = 0
    count = 0
    while(count < 100):
        tot_songs += float(num/den)
        num += 1
        den *= song_count
        count += 1
    print tot_songs
