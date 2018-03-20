# kotlin_multi_target
A sample project to compile kotlin code to .jar for an Android Project and a .framework for iOS Project.

## Structure
- Android App - Android Application
- iOSApp - iOS Application(run on simulator)
- base - Base for common logic

## Running
- Running `./gradlew build` in `base/` will generate a .jar file
in build folder which can be imported for Android Project
- Running `./gradlew build` at root folder will generate framework
file(s) in `build/bin/` for simulator and iphone which then can
be imported in xcode.