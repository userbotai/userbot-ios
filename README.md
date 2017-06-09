# Userbot

:iphone: Userbot for iOS, for integrating Userbot into your iOS application.

___
### Compatibility

  - Userbot for iOS supports iOS 8, iOS 9 and iOS 10.
  - The library is written in ObjectiveC
 
  ___

### Installation

1) Copy into your project all the files (Userbot.h, libUserbot.a, the images)
2) Go to **Build Settings -> Other Linker Flag** and add the **-ObjC** flag
3) Go to **Build Phases -> Link Binary with Libraries** and add the **libz.tbd** framework 

Now import the header in the viewcontroller where you'd like to open the chat

```sh
#import "Userbot.h"
```

And then simply use the following code to open the chat and pass custom parameters

```sh
    //Optional Parameters:
    //[Userbot setUserID:@"123"];
    //[Userbot setUserName: @"iOS Test"];
    //[Userbot setUserEmail: @"test@test.com"];
    //[Userbot setUserPhone: @"+3912345678"];
    //[Userbot setProfilePic:@"https://pbs.twimg.com/profile_images/488032229180731392/7aFkm6ZZ.jpeg"];
    //[Userbot setBaseColor:[UIColor orangeColor]];
    
    [Userbot OpenChatWithKey:@"YourKey"];
```
___
![N|Userbot](https://image.ibb.co/gBCMSa/Simulator_Screen_Shot_09_giu_2017_11_14_36.png)
