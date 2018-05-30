

#import <UIKit/UIKit.h>
#include "UntitledViewController.h"
#include "AGK.h"

@class EAGLView;

@interface iphone_appAppDelegate : NSObject <UIApplicationDelegate, AVAudioPlayerDelegate> {
    UIWindow *window;
	UntitledViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UntitledViewController *viewController;

@end

@interface GADBannerView : UIView @end
@interface GADRequest : NSObject @end
@interface GADInterstitial : NSObject @end
@interface Chartboost : NSObject @end