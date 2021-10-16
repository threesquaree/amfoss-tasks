 Nayan@Nayans-MacBook-Air ~ % cd Documents
Nayan@Nayans-MacBook-Air Documents % cd amfoss-tasks
Nayan@Nayans-MacBook-Air amfoss-tasks % cd task-02
Nayan@Nayans-MacBook-Air task-02 % mkdir Coordinates-Location
Nayan@Nayans-MacBook-Air task-02 % cd Coordinates-Location
Nayan@Nayans-MacBook-Air Coordinates-Location % mkdir North
Nayan@Nayans-MacBook-Air Coordinates-Location % cd North
Nayan@Nayans-MacBook-Air North % touch NDegree.txt
Nayan@Nayans-MacBook-Air North % cat > NDegree.txt
9° %                                                                                              Nayan@Nayans-MacBook-Air North % touch NSeconds.txt
Nayan@Nayans-MacBook-Air North % cat > NSeconds.txt
5' %                                                                                              Nayan@Nayans-MacBook-Air North % cat > NSeconds.txt
38.1" %                                                                                           Nayan@Nayans-MacBook-Air North % touch NMinutes.txt
Nayan@Nayans-MacBook-Air North % cat > NMinutes.txt
5' %                                                                                              Nayan@Nayans-MacBook-Air North % touch NorthCoordinate.txt                        
Nayan@Nayans-MacBook-Air North % cat  NDegree.txt NMinutes.txt NSeconds.txt > NorthCoordinates.txt
Nayan@Nayans-MacBook-Air North % cat NorthCoordinates.txt
9° 5' 38.1" %                                                                                     Nayan@Nayans-MacBook-Air North % cp ~/Documents/amfoss-tasks/task-02/Coordinates-Location/North/NorthCoordinates.txt ~/Documents/amfoss-tasks/task-02/Coordinates-Location
Nayan@Nayans-MacBook-Air North % mv /Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/NorthCoordinates.txt /Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/North.txt           
Nayan@Nayans-MacBook-Air North % rm /Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/North/NorthCoordinates.txt
Nayan@Nayans-MacBook-Air North % cd -
~/Documents/amfoss-tasks/task-02/Coordinates-Location
Nayan@Nayans-MacBook-Air Coordinates-Location % mkdir East 
Nayan@Nayans-MacBook-Air Coordinates-Location % cd East
Nayan@Nayans-MacBook-Air East % touch EDegree.txt
Nayan@Nayans-MacBook-Air East % cat > EDegree.txt
76° %                                                                                               Nayan@Nayans-MacBook-Air East % touch EMinutes.txt
Nayan@Nayans-MacBook-Air East % cat > EMinutes.txt
29' %                                                                                               Nayan@Nayans-MacBook-Air East % touch ESeconds.txt
Nayan@Nayans-MacBook-Air East % cat > ESeconds.txt
30.8" %                                                                                             Nayan@Nayans-MacBook-Air East % touch EastCoordinates.txt
Nayan@Nayans-MacBook-Air East % cat EDegree.txt EMinutes.txt ESeconds.txt > EastCoordinates.txt
Nayan@Nayans-MacBook-Air East % cat EastCoordinates.txt
Nayan@Nayans-MacBook-Air East % cp ~/Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/East/EastCoordinates.txt /Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location
cp: /Users/Nayan/Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/East/EastCoordinates.txt: No such file or directory
Nayan@Nayans-MacBook-Air East %  cp ~/Documents/amfoss-tasks/task-02/Coordinates-Location/East/EastCoordinates.txt ~/Documents/amfoss-tasks/task-02/Coordinates-Location
Nayan@Nayans-MacBook-Air East % mv /Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/EastCoordinates.txt /Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/East.txt           
Nayan@Nayans-MacBook-Air East % rm /Users/Nayan/Documents/amfoss-tasks/task-02/Coordinates-Location/East/EastCoordinates.txt
Nayan@Nayans-MacBook-Air East % cd -
~/Documents/amfoss-tasks/task-02/Coordinates-Location
Nayan@Nayans-MacBook-Air Coordinates-Location % touch Location-Coordinates.txt
Nayan@Nayans-MacBook-Air Coordinates-Location % cat North.txt East.txt > Location-Coordinate.txt


/Users/Nayan/Desktop/Screenshot 2021-10-14 at 9.01.56 PM.png
