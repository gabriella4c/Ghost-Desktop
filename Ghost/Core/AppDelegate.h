//
//  AppDelegate.h
//  Ghost
//
//  Created by Enric Enrich on 09/09/15.
//
//

#import <Cocoa/Cocoa.h>

@class WindowController;

@interface AppDelegate : NSObject <NSApplicationDelegate,NSUserNotificationCenterDelegate>

@property (retain, nonatomic) WindowController *windowController;

@end