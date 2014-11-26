//
//  ChooseStringEncodingWindowController.h
//  HexFiend_2
//
//  Copyright 2010 ridiculous_fish. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ChooseStringEncodingWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate> {
    IBOutlet NSTableView *tableView;
    NSDictionary *keysToEncodings;
    NSArray *encodings;
}

@end
