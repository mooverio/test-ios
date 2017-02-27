#!/bin/sh
# This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/UnoCore/0.46.1/targets/android/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`/test-ios/app/src/main"

##if #(JDK.Directory:IsSet)
#export JAVA_HOME="#(JDK.Directory)"
##endif

##if #(Ant.Directory:IsSet)
#PATH="#(Ant.Directory)/bin:$PATH"
##endif

echo "## 1/2: libtestios.so"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

./makew -s -j $JOB_COUNT "$@"

echo ""
echo "## 2/2: test-ios.apk"

if ! which ant > /dev/null 2>&1; then
    echo "ERROR: 'ant' was not found." >&2
    exit 1
fi

ant debug

cd "`dirname "$0"`"
ln -sf test-ios/app/src/main/bin/test-ios-debug.apk test-ios.apk
