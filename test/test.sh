echo "running gtesttest tests (lmao)."

g++ -o ./gtesttesttest -std=c++11 -g -Wall ./main_test.cc -lgtest_main -I/usr/local/include/ -lgtest -v

echo "$(./gtesttesttest)"
