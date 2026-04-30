#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <path> <ClassName>"
    exit 1
fi

PATH_DIR=$1
CLASS_NAME=$2
FILE_NAME="$PATH_DIR/$CLASS_NAME.hpp"

# Crear directorio si no existe
mkdir -p "$PATH_DIR"

# Convert ClassName -> CLASS_NAME_HPP
GUARD=$(echo "$CLASS_NAME" \
    | sed 's/\([a-z0-9]\)\([A-Z]\)/\1_\2/g' \
    | tr '[:lower:]' '[:upper:]')"_HPP"

cat << EOF > "$FILE_NAME"
#ifndef $GUARD
#define $GUARD

class $CLASS_NAME
{
private:

public:

};

#endif
EOF

echo "Created $FILE_NAME"
