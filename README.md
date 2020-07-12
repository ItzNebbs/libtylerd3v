# libtylerd3v
Library with several classes used in my tweaks.

## How to Use
If you wish to use this library in your tweak preferences, here's how to set it up:
- Install libtylerd3v on your device from the Packix Repo
- Copy the .dylib from your device to your $THEOS/lib folder (I use the scp command to do this)
- Download the .h files from the include folder and place them in your $THEOS/include folder
- In the Makefile for your preferences, add the line ```$(BUNDLE_NAME)_LIBRARIES = tylerd3v```
- Add ```Depends: xyz.tylerd3v.libtylerd3v``` to your tweaks control file

## TDApplyListController
TDApplyListController is a regular PSListController, with an Apply button at the right side of the Navigation Bar.

XXXRootListController.h:
```objective-c
#import <TDApplyListController.h>

@interface XXXRootListController : TDApplyListController
@end
```

XXXRootListController.m
```objective-c
#import "XXXRootListController.h"

@implementation XXXRootListController
- (NSMutableArray *)specifiers {
	return [super specifiers];
}
- (NSString *)plistName {
	return @"Root";
}
@end
```
TDApplyListController also includes the ability to show/hide cells using a PSSwitchCell. Here's an example:
```xml
<key>cell</key>
<string>PSSwitchCell</string>
<key>default</key>
<true/>
<key>defaults</key>
<string>com.yourtweakprefs.bundleid</string>
<key>key</key>
<string>kEnabled</string>
<key>label</key>
<string>Enabled</string>
<key>nestedEntryCount</key> <!-- The identifier for showing/hiding cells. -->
<integer>18</integer> <!-- Number of Cells to show/hide. Including any PSGroupCells. -->
```

## TDListController
TDListController is just a regular PSListController.

XXXRootListController.h:
```objective-c
#import <TDListController.h>

@interface XXXRootListController : TDListController
@end
```

XXXRootListController.m
```objective-c
#import "XXXRootListController.h"

@implementation XXXRootListController
- (NSMutableArray *)specifiers {
	return [super specifiers];
}
- (NSString *)plistName {
	return @"Root";
}
@end
```
TDListController also includes the ability to show/hide cells using a PSSwitchCell. Here's an example:
```xml
<dict>
	<key>cell</key>
	<string>PSSwitchCell</string>
	<key>default</key>
	<true/>
	<key>defaults</key>
	<string>com.yourtweakprefs.bundleid</string>
	<key>key</key>
	<string>kEnabled</string>
	<key>label</key>
	<string>Enabled</string>
	<key>nestedEntryCount</key> <!-- The identifier for showing/hiding cells. -->
	<integer>18</integer> <!-- Number of Cells to show/hide. Including any PSGroupCells. -->
</dict>
```

## TDImagePicker
TDImagePicker is a modified version of libimagepicker by Muirey03, which implements some design changes by iKilledAppl3. Thanks to iKilledAppl3 for allowing me to implement part of his image picker in my own variation.

Add the line ```#import <TDImagePicker.h>``` to your XXXRootListController.h.

In your .plist file:
```xml
<dict>
	<key>big</key>
	<true/>
	<key>cell</key>
	<string>PSLinkCell</string>
	<key>cellClass</key>
	<string>TDImagePickerCell</string>
	<key>label</key>
	<string>Choose Image</string>
	<key>action</key>
	<string>chooseImage</string>
	<key>defaults</key>
	<string>com.yourtweakprefs.bundleid</string>
	<key>key</key>
	<string>kCustomImage</string>
	<key>usesJPEG</key>
	<true/>
	<key>usesGIF</key>
	<true/>
	<key>compressionQuality</key>
	<real>1.0</real>
</dict>
```
