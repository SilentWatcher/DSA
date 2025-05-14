#!/bin/bash

SOURCE_FILE="$1"
BASENAME=$(basename "$SOURCE_FILE" .cpp)
EXECUTABLE="$BASENAME"

# Clear previous error log
echo "🚀 Running: $SOURCE_FILE" > error.txt

# Compile the source file
g++ -std=c++17 -o "$EXECUTABLE" "$SOURCE_FILE" 2>> error.txt

if [ $? -ne 0 ]; then
  echo -e "\n🧠 Syntax Error: Compilation failed!" >> error.txt
  exit 1
fi

# Run the compiled program with input and capture runtime errors
./"$EXECUTABLE" < input.txt > output.txt 2>> error.txt

if [ $? -ne 0 ]; then
  echo -e "\n🔥 Runtime Error: Your program crashed during execution." >> error.txt
  exit 1
fi

# If all goes well
echo -e "\n✅ Success: Code compiled and ran without any issues." >> error.txt
echo "👉 Check output.txt for output." >> error.txt
