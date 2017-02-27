#!/bin/sh
# This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/UnoCore/0.46.1/targets/android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "test-ios"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.testios"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.testios"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "test-ios.apk" \
    --package=com.apps.testios \
    --activity=testios \
    --sym-dir="test-ios/app/src/main/.uno" \
    "$@"
