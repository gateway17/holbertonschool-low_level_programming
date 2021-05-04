#!/bin/bash -x

for i in $"ls" do
    cd $i
        for e in $(ls) do
        cat $e | grep "int _islower(int c);"
        if [ $? == 0]; then
            printf("Existe. en $PATH.")
        fi
        done
    cd ..
done