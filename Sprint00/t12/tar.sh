case $1 in
   "-c") tar -cf $2 $3 $4 $5
   ;;
   "-e") tar -xf $2
   ;;
esac
