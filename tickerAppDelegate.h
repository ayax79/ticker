//
//  tickerAppDelegate.h
//  ticker
//
//  Created by Andrew Wright on 4/1/10.
//  Copyright 2010 Iovation. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface tickerAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
