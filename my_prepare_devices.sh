
rm -r /mnt/pmem0/ljh/*
mkdir -p /mnt/pmem0/ljh/prism


for SET in $(seq 0 7);
do
    rm -r /home/ljh/test_prism${SET}
    mkdir -p /home/ljh/test_prism${SET}
done

chmod -R 777 "/mnt/pmem0/ljh"