//
//  MyDocument.h
//  HexFiend_2
//
//  Created by Peter Ammon on 11/3/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class HFRepresenter, HFLineCountingRepresenter, HFLayoutRepresenter, HFFindReplaceRepresenter;

@interface MyDocument : NSDocument {
    IBOutlet NSSplitView *containerView;
    HFController *controller;
    
    HFLineCountingRepresenter *lineCountingRepresenter;
    HFRepresenter *hexRepresenter;
    HFRepresenter *asciiRepresenter;
    HFRepresenter *scrollRepresenter;
    HFLayoutRepresenter *layoutRepresenter;
    HFStatusBarRepresenter *statusBarRepresenter;
    
    HFController *findReplaceController;
    HFFindReplaceRepresenter *findReplaceRepresenter;

    NSView *bannerView;
    NSView *bannerDividerThumb;
    BOOL bannerGrowing;
    CGFloat bannerTargetHeight;
    CFAbsoluteTime bannerStartTime;
}

@end
