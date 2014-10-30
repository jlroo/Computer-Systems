

* * * * * * TERMINAL TUTORIAL * * * * * * *
* (1) HOW TO CREATE AND SETUP SSH KEY     *
* * * * * * * * * * * * * * * * * * * * * *
* (2) REMOTE CONNECTION IN TERMINAL (MAC) *
* * * * * * * * * * * * * * * * * * * * * *

(1) SSH KEY CREATION AND SETUP

On your computer (Local machine) run the following code to create an
ssh key:

$ ssh-keygen -t rsa -C "your_email@example.com"

# Creates a new ssh key, using the provided email as a label
# Generating public/private rsa key pair.
# Enter file in which to save the key (/Users/you/.ssh/id_rsa): [Press enter]
# Follow instructions ...
# and you will get somehting like this:

Your identification has been saved in /Users/you/.ssh/id_rsa.
Your public key has been saved in /Users/you/.ssh/id_rsa.pub.
The key fingerprint is:
01:0f:f4:3b:ca:85:d6:17:a1:7d:f0:68:9d:f0:a2:db your_email@example.com

# Then add your new key to the ssh-agent, running the following code:
# start the ssh-agent in the background

$ eval "$(ssh-agent -s)"
  Agent pid 59566
$ ssh-add ~/.ssh/id_rsa

# Now that you create a ssh public key you have to install it in the remote
# server, in this case shannon or knuth (Loyola Linux Virtual Mahines)
# Run the following code to install your key in the server.

$ scp $HOME/.ssh/id_rsa.pub YOUR_USER_NAME@LUC_SERVER.CS.LUC.EDU:~/.ssh/authorized_keys

# It will ask you for your password the same one that you use if you login with
# putty or the online shell.
# Test if its working propertly with the following command:

$ ssh YOUR_USER_NAME@luc_server.cs.luc.edu

# You should see information about the Virtual Machine like this:

Ubuntu 12.04.5 LTS
Welcome to Ubuntu 12.04.5 LTS (GNU/Linux 3.13.0-33-generic x86_64)
 * Documentation:  https://help.ubuntu.com/
18 packages can be updated.
16 updates are security updates.
New release '14.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.
Your Hardware Enablement Stack (HWE) is supported until April 2017.
Last login: 
YOUR_USER_NAME@shannon:~$ 

# Now in the terminal (MAC) go to:
SHELL -> NEW REMOTE CONNECTION

# In Remote connections select:
SECURE SHELL (SSH)

# In the rigth side (SERVER) hit (+), and enter the name or ip address of the server
# for our purpose its the server name:

LUC_SERVER.cs.luc.edu

# Now go to WINDOW -> SAVE WINDOW AS A GROUP 
# give a name to your workstation select RESTORE ALL COMMANDS, to save previous connections and commands in the terminal.
# Done, now you just need to open the WINDOW GROUP to use the LUC Linux Virtual Machine.

