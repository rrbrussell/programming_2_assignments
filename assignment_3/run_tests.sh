#!/usr/bin/env bash
cat ./test_data.txt | xargs -L 1 ./solvequad >> ./test_results.txt