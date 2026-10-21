#include <iostream>
#include <string>
#include <vector>

/*
    Karl Rohr
        Contact Info:
            Email: krohr@fullsail.com
            Discord: karlrohr
            Zoom: https://fullsail.zoom.us/zbook/karl-rohr/karl-rohr-office-hours

            Campus and section 03, your lab 6 and and most of the midterms have been graded, I'll be finishing them
            up tonight.

            I'll be checking for final and lab 7 submissions Friday morning 12:01 am and grade Friday to Saturday

            We'll get started in a few minutes

            Todays Links:
                    https://github.com/
                        Create an account with your student email here

                    https://git-scm.com/install/windows
                        You'll download the latest (2.56.0(2)) x64 
                            it's the top link on this page


            Today is going to be stuff for pg2 and beyond
                Git
                Github
                command line interfaces

                color coding text
                file io
                random
                look at how to slowdown text




        Notes
            Command line
            
                pwd
                    print working directory
                        shows you where you're at

                ls
                    list
                        shows folders and files
                        
                        optional commands
                            ls -ll
                            ls -la

                cd
                    change directory
                        cd relativePathToFolder
                        cd truePathToFolder

                        cd .. 
                            goes up one level



                nano 
                    simple text editior
                        nano fileName
                            ctrl is the ^ symbol


                touch
                    creates a file
                        touch fileName


                rm
                    removes a file
                        rm fileName

                rmdir 
                    removes a folder
                        rm folderName



                git init
                    initializes a LOCAL git repo


                git add
                    git add -A
                        adds everything in the git repo even sub folders and files
                    git add fileName
                    git add FolderName
                    git add .
                        basically the same thing as -A

                git status
                    this shows files that are staged or not staged
                        green or red text
                        staged files are what will be in the "snapshopt"

                git commit
                    git commit -m "some message"
                        this will create the snap shot and create an identfier for the snapshot


                git remote add NAME urlToRemoteRepo
                    This will create a connection to push or pull, upload or download a project





*/
int main()
{
    std::cout << "Hello World!\n";
}

