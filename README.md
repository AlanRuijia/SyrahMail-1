# SyrahMail

* This project is a simple macOS email client

## How to run
* Just simply run `email.app`!

## Features
* Support Multiple Users
* Security Encryption
	* Each user's inbox are encrypted by a master password. Without this password, even the inbox file got copied by others, they cannot decrypt the classified information
* Easily Mobile Database
	* We use `SQLite` database for storage. By taking its advantages, each user's inbox can be simply backed up and transfered.
* Support POP3, IMAP protocol
* Support Large attachments
* Support sent / receive emails

## Compile
* This project may support multiple operating system. The whole application is built based on **Qt4**
* If you don't want to download the whole Qt package, at least make sure you have Qt's dynamic and static libraries.