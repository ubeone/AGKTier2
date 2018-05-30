

#import <UIKit/UIKit.h>
#include "UntitledViewController.h"
#include "AGK.h"
#include "template.h"

@class EAGLView;

@interface iphone_appAppDelegate : NSObject <UIApplicationDelegate, AVAudioPlayerDelegate> {
    UIWindow *window;
	UntitledViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UntitledViewController *viewController;

@end

