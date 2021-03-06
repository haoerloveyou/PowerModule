#import <UIKit/UIViewController.h>
#import <ControlCenterUIKit/CCUIContentModuleContentViewController-Protocol.h>
#import "RespringButtonController.h"
#import "RebootButtonController.h"
#import "SafemodeButtonController.h"
#import "UICacheButtonController.h"
#import "PowerDownButtonController.h"
#import "LockButtonController.h"

@interface PowerUIModuleContentViewController : UIViewController <CCUIContentModuleContentViewController>
//these are the dimensions of the module once its expanded
@property (nonatomic,readonly) CGFloat preferredExpandedContentHeight;
@property (nonatomic,readonly) CGFloat preferredExpandedContentWidth;

//not really sure what this is tbh
@property (nonatomic,readonly) BOOL providesOwnPlatter;

//width of the module
@property CGFloat mWidth;

//these are the UIViewControllers for the buttons that are added to the module - each one inherits from CCUILabeledRoundButtonViewController
@property RespringButtonController* respringBtn;
@property RebootButtonController* rebootBtn;
@property UICacheButtonController* UICacheBtn;
@property SafemodeButtonController* safemodeBtn;
@property LockButtonController* lockBtn;
@property PowerDownButtonController* powerDownBtn;
@property BOOL isExpanded;

//this is what I'm using to set mWidth
-(void)getWidth;
@end
