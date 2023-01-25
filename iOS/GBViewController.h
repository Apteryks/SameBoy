#import <UIKit/UIKit.h>

typedef enum {
    GBRunModeNormal,
    GBRunModeTurbo,
    GBRunModeRewind,
    GBRunModeRewindPaused,
} GBRunMode;

@interface GBViewController : UIViewController <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow *window;
- (void)reset;
- (void)openLibrary;
- (void)start;
- (void)stop;
- (void)changeModel;
- (void)openStates;
- (void)openSettings;
- (void)showAbout;
- (void)saveStateToFile:(NSString *)file;
- (void)loadStateFromFile:(NSString *)file;
@property (nonatomic) GBRunMode runMode;
@end
