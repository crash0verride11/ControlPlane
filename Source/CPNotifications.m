//
//  CPNotifications.m
//  ControlPlane
//
//  Created by Dustin Rue on 7/27/12.
//
//  IMPORTANT: This code is intended to be compiled for the ARC mode
//

#import "CPNotifications.h"

@implementation CPNotifications

+ (void)postUserNotification:(NSString *)title withMessage:(NSString *)message
{
    //if ([[NSUserDefaults standardUserDefaults] boolForKey:@"EnableGrowl"]) {
    //    [CPNotifications postNotification:[title copy] withMessage:[message copy]];
    //}
}

+ (void)postNotification:(NSString *)title withMessage:(NSString *)message
{
    // use Notification Center if it is available
    if (NSClassFromString(@"NSUserNotification") != nil) {
        NSUserNotification *notificationMessage = [[NSUserNotification alloc] init];
        
        notificationMessage.title = title;
        notificationMessage.informativeText = message;
        
        NSUserNotificationCenter *unc = [NSUserNotificationCenter defaultUserNotificationCenter];
        
        [unc scheduleNotification:notificationMessage];
    }
}

@end
