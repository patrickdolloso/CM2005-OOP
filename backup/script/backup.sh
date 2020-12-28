#Do not modify or add to this code. It is essential to backup your work!

echo "starting backup"
echo $(date +"%Y%m%d") > /home/coder/project/backupdate.txt
#Zip the folder, name is "archive", and place it inside /backup/code
cd /home/coder/project
zip -FSr /home/coder/project/backup/code/archive * -x \*node_modules\* \*code\* \*script\*
#confirm operation
echo "Backup succesfully executed. now add /download/ to the address in the web browser to download it. Don't forget the / at the end of /download/ "
