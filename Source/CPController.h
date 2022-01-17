//
//  CPController.h
//  ControlPlane
//
//  Created by David Symonds on 1/02/07.
//  Major rework by Vladimir Beloborodov (VladimirTechMan) in Q2-Q3 2013.
//

#import "ContextsDataSource.h"
#import "EvidenceSource.h"


@interface CPController : NSObject <NSApplicationDelegate>

@property (retain,atomic,readonly) NSString *currentContextName;
@property (retain,atomic,readonly) NSString *currentContextPath;
@property (retain,atomic) NSString *activeContextsMenuHeader;

@property (readwrite) BOOL screenSaverRunning;
@property (readwrite) BOOL screenLocked;
@property (readwrite) BOOL goingToSleep;
@property (strong) NSMutableSet *activeContexts;
@property (strong) NSMutableSet *stickyActiveContexts;
@property (assign) IBOutlet NSMenuItem *activeContextsMenuItem;
@property (assign) IBOutlet NSMenuItem *currentContextNameMenuItem;
@property (assign) IBOutlet NSMenuItem *activeContextsMenuDivider;
@property (assign) IBOutlet NSMenuItem *stickForcedContextMenuItem;

@property (copy,nonatomic,readwrite) NSArray *activeRules;

- (ContextsDataSource *)contextsDataSource;
- (BOOL)stickyContext;
+ (BOOL)isDarkMode;

- (void)forceSwitch: (id) sender;
- (IBAction)toggleSticky: (id) sender;

- (void)restartSwitchSmoothing;

- (void)suspendRegularUpdates;
- (void)resumeRegularUpdates;
- (void)resumeRegularUpdatesWithDelay:(int64_t)nanoseconds;
- (void)forceUpdate;

- (NSString*)currentContextAsString;
+ (NSSet *) sharedActiveContexts;

@end
